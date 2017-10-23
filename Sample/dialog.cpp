#include "dialog.h"
#include <QHBoxLayout>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    //隐藏边框
    this->setFixedSize(600, 750);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowOpacity(1.0);//设置透明
    //在界面上显示时间
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(500);

    connect(layout->close, SIGNAL(clicked(bool)), this, SLOT(closeButton()));
    connect(layout->start, SIGNAL(clicked(bool)), this, SLOT(startSystem()));
    connect(layout->in, SIGNAL(pressed()), this, SLOT(videoIn()));
    connect(layout->in, SIGNAL(released()), this, SLOT(videoInrelease()));
    connect(layout->out, SIGNAL(pressed()), this, SLOT(videoOut()));
    connect(layout->out, SIGNAL(released()), this, SLOT(videoOutrelease()));

    QVBoxLayout *mainlayout = new QVBoxLayout;
    mainlayout->addLayout(layout->topLayout);
    mainlayout->addLayout(layout->framelayout);
    mainlayout->addLayout(layout->concrollayout);
    mainlayout->addLayout(layout->gllayout);
    mainlayout->addLayout(layout->buttonlayout);
    setLayout(mainlayout);
}

Dialog::~Dialog()
{
    delete layout;
}

void Dialog :: __stdcall  RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD  dwBufSize, void* dwUser)
{
    if (dwUser != NULL)
       {
           qDebug("Demmo lRealHandle[%d]: Get StreamData! Type[%d], BufSize[%d], pBuffer:%p\n", lRealHandle, dwDataType, dwBufSize, pBuffer);
       }
}

void Dialog :: CALLBACK ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
{
    qDebug("ExceptionCallBack lUserID:%d, handle:%d, user data:%p", lUserID, lHandle, pUser);
    char tempbuf[256];
    memset(tempbuf, 0, 256);
    switch(dwType)
    {
    case EXCEPTION_AUDIOEXCHANGE:		//Audio exchange exception
        sprintf(tempbuf,"Audio exchange exception!");

        //TODO: close audio exchange
        break;

    //Alarm//
    case EXCEPTION_ALARM:			            //Alarm exception
        sprintf(tempbuf,"Alarm exception!");

        //TODO: close alarm update
        break;
    case EXCEPTION_ALARMRECONNECT:  //Alarm reconnect
        sprintf(tempbuf,"Alarm reconnect.");

        break;
    case ALARM_RECONNECTSUCCESS:      //Alarm reconnect success
        sprintf(tempbuf,"Alarm reconnect success.");

        break;

    case EXCEPTION_SERIAL:			           //Serial exception
        sprintf(tempbuf,"Serial exception!");

        //TODO: close exception
        break;

    //Preview//
    case EXCEPTION_PREVIEW:			     //Preview exception
        sprintf(tempbuf,"Preview exception!");

        //TODO: close preview
        break;
    case EXCEPTION_RECONNECT:			 //preview reconnect
        sprintf(tempbuf,"preview reconnecting.");

        break;
    case PREVIEW_RECONNECTSUCCESS: //Preview reconnect success
        sprintf(tempbuf,"Preview reconncet success.");

        break;
    default:
        break;
    }
}

void Dialog :: showTime()
{
    QTime time = QTime::currentTime();
    QString txtTime = time.toString("hh:mm:ss");
    layout->timeLabel->display(txtTime);
}

void Dialog :: startSystem()
{
    LONG lUserID;
    int i = NET_DVR_Init();
    qDebug("%d", i);

    NET_DVR_SetConnectTime(2000,1);
    NET_DVR_SetReconnect(10000,true);
    NET_DVR_SetExceptionCallBack_V30(0, NULL, ExceptionCallBack, NULL);

#if 1
    NET_DVR_USER_LOGIN_INFO struLoginInfo = {0};
    struLoginInfo.bUseAsynLogin = 0;
    strcpy(struLoginInfo.sDeviceAddress, "192.168.1.51");
    struLoginInfo.wPort = 8000;
    strcpy(struLoginInfo.sUserName, "admin");
    strcpy(struLoginInfo.sPassword, "admin");

    NET_DVR_DEVICEINFO_V40 struDeviceInfoV40 = {0};
#endif
    lUserID = NET_DVR_Login_V40(&struLoginInfo, &struDeviceInfoV40);
    if(lUserID < 0){
        qDebug("Login error, %d\n", NET_DVR_GetLastError());
        NET_DVR_Cleanup();
        return;
    }

    NET_DVR_PREVIEWINFO struPlayInfo = {0};
    struPlayInfo.hPlayWnd = (HWND)layout->frame->winId();
    struPlayInfo.lChannel   = 1;
    struPlayInfo.dwStreamType = 0;
    struPlayInfo.dwLinkMode = 0;
    struPlayInfo.bBlocked = 1;
    struPlayInfo.dwDisplayBufNum = 0;
    struPlayInfo.byPreviewMode = 0;
    realhandle = NET_DVR_RealPlay_V40(lUserID, &struPlayInfo, NULL,NULL);
    if(realhandle < 0)
    {
        qDebug("NET_DVR_RealPlay_V40, %d", NET_DVR_GetLastError());
        NET_DVR_Logout( lUserID);
    }else{
        qDebug("NET_DVR_RealPlay_V40 success!");
    }
}

void Dialog :: mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        m_bpressed = true;
        m_point = event->pos();
    }
}

void Dialog :: mouseMoveEvent(QMouseEvent *event)
{
    if(m_bpressed){
        move(event->pos() - m_point + pos());
    }
}

void Dialog :: mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bpressed = false;
}

void Dialog :: videoIn()
{
    int i;
    i = NET_DVR_PTZControl(realhandle, 11, 0);
    if(i < 0){
        qDebug("NET_DVR_PTZControl error! %d", NET_DVR_GetLastError());
    }
}

void Dialog :: videoInrelease()
{
    int i;
    i = NET_DVR_PTZControl(realhandle, 11, 1);
    if(i < 0){
        qDebug("NET_DVR_PTZControl error! %d", NET_DVR_GetLastError());
    }
}

void Dialog :: videoOut()
{
    int i = NET_DVR_PTZControl(realhandle, 12, 0);
    if(i < 0){
        qDebug("NET_DVR_PTZControl error! %d", NET_DVR_GetLastError());
    }
}

void Dialog :: videoOutrelease()
{
    int i = NET_DVR_PTZControl(realhandle, 12, 1);
    if(i < 0){
        qDebug("NET_DVR_PTZControl error! %d", NET_DVR_GetLastError());
    }
}

void Dialog :: closeButton()
{
    delete layout;
    exit(0);
}
