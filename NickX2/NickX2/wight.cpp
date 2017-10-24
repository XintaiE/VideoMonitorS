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
/*    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint |
                         Qt::WindowMinMaxButtonsHint);
*/
    m_work = new work;
    m_parameter = new parameter;
    m_load = new load;
    m_warning = new warning;
    m_area = new area;
    m_tower = new tower;
    m_system = new setsystem;
    m_constrution = new construction;

    ui->ltower->setText(tr("塔机群监测"));
    ui->lload->setText(tr("本机监测"));
    ui->lcrane->setText(tr("塔吊监测"));
    ui->ltext->setText(tr("NickX2"));
    ui->tbcn->setText(tr("中/英"));

    setToolButtonStyle(ui->tbwork,tr("工作记录"),E_NORMAL,":/images/workrecord.png");
    setToolButtonStyle(ui->tbparameter,tr("参数标定"),E_NORMAL,":images/parameter.png");
    setToolButtonStyle(ui->tbload,tr("负荷表"),E_NORMAL,":/images/load.png");
    setToolButtonStyle(ui->tbwarning,tr("报警设置"),E_NORMAL,":/images/warning.png");
    setToolButtonStyle(ui->tbarea,tr("区域设置"),E_NORMAL,":/images/area.png");
    setToolButtonStyle(ui->tbtower,tr("塔机设置"),E_NORMAL,":/images/tower.png");
    setToolButtonStyle(ui->tbsystem,tr("系统设置"),E_NORMAL,":/images/system.png");
    setToolButtonStyle(ui->tbconstruction,tr("工地设置"),E_NORMAL,":/images/constrution.png");


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
    ui->label->setText(timec);
}
void wight ::setToolButtonStyle(QToolButton *tbn, const QString &text, int textsize, const QString iconName)  //按钮样式
{
    tbn->setText(text);

    if(textsize == E_BIG)
    {
     tbn->setFont(QFont("文泉驿雅黑",16,QFont::Bold));
    }else if(textsize == E_NORMAL)
    {
        tbn->setFont(QFont("文泉驿雅黑",8,QFont::Normal));
    }
    tbn->setAutoRaise(true);
    tbn->setFixedSize(60,78);
    tbn->setIcon(QPixmap(QString("%1").arg(iconName)));
    tbn->setIconSize(QPixmap(QString("%1").arg(iconName)).size());
    tbn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);



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

void wight::on_tbcn_clicked()
{

}
