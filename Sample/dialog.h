#ifndef DIALOG_H
#define DIALOG_H
#include <QString>
#include <QTimer>
#include <QTime>
#include <QMouseEvent>
#include <QDialog>
#include <QPoint>
#include "layout.h"
#include "include/HCNetSDK.h"

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void __stdcall  RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD  dwBufSize, void* dwUser);
    static void CALLBACK ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser);
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    bool m_bpressed;
    QPoint m_point;
    Layout *layout = new Layout;
    LONG realhandle;
private slots:
    void showTime();//显示时间
    void closeButton();
    void startSystem();
    void videoIn();
    void videoInrelease();
    void videoOut();
    void videoOutrelease();
};

#endif // DIALOG_H
