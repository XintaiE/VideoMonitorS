#ifndef LAYOUT_H
#define LAYOUT_H

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QFrame>
#include <QGLWidget>
#include <QLCDNumber>
#include <QMouseEvent>
#include <QEvent>
#include "openglwidget.h"

class Layout
{
public:
    Layout();
    ~Layout();

    QLCDNumber *timeLabel = new QLCDNumber;
    QLabel *titleLabel = new QLabel();
    QLabel *weatherLabel = new QLabel;

    QFrame *frame = new QFrame;
    OpenGlWidget *glWidget = new OpenGlWidget;

    QPushButton *close = new QPushButton;
    QPushButton *start = new QPushButton;
    QPushButton *in = new QPushButton;
    QPushButton *out = new QPushButton;

    QPushButton *work = new QPushButton;
    QPushButton *parameter = new QPushButton;
    QPushButton *Loadmeter = new QPushButton;
    QPushButton *Waring = new QPushButton;
    QPushButton *Towercrane = new QPushButton;
    QPushButton *System = new QPushButton;
    QPushButton *Constructionsite = new QPushButton;
    QPushButton *area = new QPushButton;

    QHBoxLayout *topLayout = new QHBoxLayout;
    QVBoxLayout *framelayout = new QVBoxLayout;
    QHBoxLayout *concrollayout = new QHBoxLayout;
    QVBoxLayout *gllayout = new QVBoxLayout;
    QHBoxLayout *buttonlayout = new QHBoxLayout;
};


#endif // LAYOUT_H
