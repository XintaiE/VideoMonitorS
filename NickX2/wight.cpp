#include "wight.h"
#include "ui_wight.h"
#include <QDateTime>
#include <QPalette>
#include <QFont>
#include <QPixmap>
#include <QPalette>
#include "work.h"
#include "parameter.h"
#include "load.h"
#include "warning.h"
#include "tower.h"
#include "area.h"
#include "setsystem.h"
#include "construction.h"

wight::wight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wight)
{
    ui->setupUi(this);
    this->initFrom();
    this->initDatetime();
    this->initTooltip();
}

void wight::initDatetime()   //时间初始化
{
    QTimer *time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(setcurrertime()));
    time->start(1000);
}

void wight::initFrom()  //界面初始化
{
#if 0
   this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint |
                         Qt::WindowMinMaxButtonsHint);
#endif
    m_work = new work;
    m_parameter = new parameter;
    m_load = new load;
    m_warning = new warning;
    m_area = new area;
    m_tower = new tower;
    m_system = new setsystem;
    m_constrution = new construction;
/*
    ui->widget_button->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/icon/Z_Yj.png");
    palette.setBrush(QPalette::Window,QBrush(pixmap));
    ui->widget_button->setPalette(palette);
    ui->widget_button->show();
    ui->widget_top->setAutoFillBackground(true);

    QPalette palette1;
    QPixmap pixmap1(":/icon/Z_Yj.png");
    palette1.setBrush(QPalette::Window,QBrush(pixmap1));
    ui->widget_top->setPalette(palette1);
    ui->widget_top->show();

    ui->m_widget->setAutoFillBackground(true);
    QPalette palette2;
    QPixmap pixmap2(":/widget/Z_Sjdm.png");
    palette2.setBrush(QPalette::Window,QBrush(pixmap2));
    ui->m_widget->setPalette(palette2);
    ui->m_widget->show();

    ui->f_widget->setAutoFillBackground(true);
    QPalette palette3;
    QPixmap pixmap3(":/widget/Z_Ck.png");
    palette3.setBrush(QPalette::Window,QBrush(pixmap3));
    ui->f_widget->setPalette(palette3);
    ui->f_widget->show();
*/
    ui->widget_button->setStyleSheet(tr("QWidget#widget_button{border-image: url(:/icon/Z_Yj.png);}"));
    ui->widget_top->setStyleSheet(tr("QWidget#widget_top{border-image: url(:/icon/Z_Ym.png);}"));
    ui->border_Widget->setStyleSheet(tr("QWidget#border_Widget{border-image: url(:/icon/Z_Hs.png);}"));
    ui->form_Widget->setStyleSheet(tr("QWidget#form_Widget{border-image: url(:/widget/Z_Ck.png);}"));
    ui->form1_Widget->setStyleSheet(tr("QWidget#form1_Widget{border-image: url(:/widget/Z_Ck.png);}"));
    ui->form2_Widget->setStyleSheet(tr("QWidget#form2_Widget{border-image: url(:/widget/Z_Ck.png);}"));

    ui->lineEdit_14->setStyleSheet(tr("QLineEdit#lineEdit_14{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_15->setStyleSheet(tr("QLineEdit#lineEdit_15{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_16->setStyleSheet(tr("QLineEdit#lineEdit_16{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_17->setStyleSheet(tr("QLineEdit#lineEdit_17{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_18->setStyleSheet(tr("QLineEdit#lineEdit_18{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_19->setStyleSheet(tr("QLineEdit#lineEdit_19{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_20->setStyleSheet(tr("QLineEdit#lineEdit_20{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_21->setStyleSheet(tr("QLineEdit#lineEdit_21{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_22->setStyleSheet(tr("QLineEdit#lineEdit_22{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_23->setStyleSheet(tr("QLineEdit#lineEdit_23{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_24->setStyleSheet(tr("QLineEdit#lineEdit_24{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_25->setStyleSheet(tr("QLineEdit#lineEdit_25{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_26->setStyleSheet(tr("QLineEdit#lineEdit_26{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_27->setStyleSheet(tr("QLineEdit#lineEdit_27{background-color:rgba(255,255,255,0%)}"));
    ui->lineEdit_28->setStyleSheet(tr("QLineEdit#lineEdit_28{background-color:rgba(255,255,255,0%)}"));



    ui->tbtitle->setStyleSheet(tr("QToolButton#tbtitle{border-image: url(:/icon/Z_An.png);}"));
     QPalette pal;
     pal.setColor(QPalette::Background,QColor(0X00,0Xff,0X00,0X00));
     ui->S1_widget->setPalette(pal);
     ui->S2_widget->setPalette(pal);
     ui->S3_widget->setPalette(pal);
     ui->S4_widget->setPalette(pal);

     setToolButtonStyle(ui->tbwork,E_NORMAL,":/icon/Z_Gz.png");
     setToolButtonStyle(ui->tbparameter,E_NORMAL,":/icon/Z_Cs.png");
     setToolButtonStyle(ui->tbload,E_NORMAL,":/icon/Z_Fh.png");
     setToolButtonStyle(ui->tbarea,E_NORMAL,":/icon/Z_Qy.png");
     setToolButtonStyle(ui->tbtower,E_NORMAL,":/icon/Z_Tj.png");
     setToolButtonStyle(ui->tbsystem,E_NORMAL,":/icon/Z_Xt.png");
     setToolButtonStyle(ui->tbwarning,E_NORMAL,":/icon/Z_Bj.png");
     setToolButtonStyle(ui->tbconstruction,E_NORMAL,":/icon/Z_Gd.png");

}
void wight::initTooltip() //tip显示
{
    ui->tbwork->setToolTip(tr("工作记录"));
    ui->tbparameter->setToolTip(tr("参数标定"));
    ui->tbload->setToolTip(tr("负荷表"));
    ui->tbwarning->setToolTip(tr("报警设置"));
    ui->tbarea->setToolTip(tr("区域设置"));
    ui->tbtower->setToolTip(tr("塔机设置"));
    ui->tbsystem->setToolTip(tr("系统设置"));
    ui->tbconstruction->setToolTip(tr("工地设置"));

}

void wight::setcurrertime()  //设置显示当前时间
{

    QDateTime ctime = QDateTime::currentDateTime();
    QString timec = ctime.toString("hh:mm:ss");
    QString time1 = ctime.toString("yyyy-MM-dd hh:mm:ss ddd");
    ui->ltime->setText(timec);
    ui->label_29->setText(time1);
    ui->label_30->setText(time1);
    ui->label_31->setText(time1);
    ui->label_32->setText(time1);
    ui->label_33->setText(time1);
    ui->label_34->setText(time1);
    ui->label_35->setText(time1);
    ui->label_36->setText(time1);
    ui->label_37->setText(time1);
    ui->label_38->setText(time1);
    ui->label_39->setText(time1);
    ui->label_40->setText(time1);
}
void wight ::setToolButtonStyle(QToolButton *tbn, int textsize, const QString iconName)  //按钮样式
{
   // tbn->setText(text);

    if(textsize == E_BIG)
    {
     tbn->setFont(QFont("文泉驿雅黑",16,QFont::Bold));
    }else if(textsize == E_NORMAL)
    {
        tbn->setFont(QFont("文泉驿雅黑",8,QFont::Normal));
    }
    tbn->setAutoRaise(true);
    tbn->setFixedSize(50,50);
    tbn->setIcon(QPixmap(QString("%1").arg(iconName)));
    tbn->setIconSize(QPixmap(QString("%1").arg(iconName)).size());
   // tbn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);



}
wight::~wight()
{
    delete ui;
}

void wight::on_tbwork_clicked()
{

   m_work->show();
   this->close();

}

void wight::on_tbparameter_clicked()
{

}

void wight::on_tbload_clicked()
{

}

void wight::on_tbwarning_clicked()
{

}

void wight::on_tbarea_clicked()
{
    m_area->show();
}

void wight::on_tbtower_clicked()
{
        m_tower->show();
}

void wight::on_tbsystem_clicked()
{

}

void wight::on_tbconstruction_clicked()
{
    m_constrution->show();
}



void wight::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        m_bpressed = true;
        m_point = event->pos();
    }
}

void wight::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bpressed){
        move(event->pos() - m_point + pos());
    }
}

void wight::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bpressed = false;
}
