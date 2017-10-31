#include "wight.h"
#include "ui_wight.h"
#include <QDateTime>
#include <QPalette>
#include <QFont>
#include <QPixmap>

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



    setToolButtonStyle(ui->tbwork,E_NORMAL,":/icon/Z_Gz.png");
    setToolButtonStyle(ui->tbparameter,E_NORMAL,":/icon/Z_Cs.png");
    setToolButtonStyle(ui->tbload,E_NORMAL,":/icon/Z_Fh.png");
    setToolButtonStyle(ui->tbwarning,E_NORMAL,":/icon/Z_Bj.png");
    setToolButtonStyle(ui->tbarea,E_NORMAL,":/icon/Z_Qy.png");
    setToolButtonStyle(ui->tbtower,E_NORMAL,":/icon/Z_Tj.png");
    setToolButtonStyle(ui->tbsystem,E_NORMAL,":/icon/Z_Xt.png");
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
    QString timec = ctime.toString("yyyy-MM-dd hh:mm:ss");
    ui->ltime->setText(timec);
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
