/**************/
#ifndef WIGHT_H
#define WIGHT_H
#include <QToolButton>
#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QMouseEvent>
class work;
class parameter;
class load;
class warning;
class area;
class tower;
class setsystem;
class construction;
namespace Ui {
class wight;
}

class wight : public QMainWindow
{
    Q_OBJECT


    enum enum_widget{

        E_WORK_WIDGET,
        E_PARAMETER_WIDGET,
        E_LOAD_WIDGET,
        E_WARNING_WIDGET,
        E_AREA_WIDGET,
        E_TOWER_WIDGET,
        E_SYSTEM_WIDGET,
        E_CONSTRUCTION_WIDGET
    };
    enum E_TEXTSIZE{
        E_NORMAL = 0,
        E_BIG = !E_NORMAL
    };

public:
    explicit wight(QWidget *parent = 0);
    ~wight();
private:
    void initFrom();  //界面样式初始化
    void initDatetime();  //初始化当前时间
    void initTooltip();   //tip提示
    void setToolButtonStyle(QToolButton*tbn,const QString &text,int textsize,const QString iconName); //设置按钮样式

//以下三个函数实现无边框可移动
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void setcurrertime(); //设置当前时间

    void on_tbwork_clicked();

    void on_tbparameter_clicked();

    void on_tbload_clicked();

    void on_tbwarning_clicked();

    void on_tbarea_clicked();

    void on_tbtower_clicked();

    void on_tbsystem_clicked();

    void on_tbconstruction_clicked();

    void on_tbcn_clicked();

private:
    Ui::wight *ui;
    work *m_work;
    parameter *m_parameter;
    load *m_load;
    warning *m_warning;
    area *m_area;
    tower *m_tower;
    setsystem *m_system;
    construction *m_constrution;

    bool m_bpressed;
    QPoint m_point;

};

#endif // WIGHT_H
