#include "layout.h"

Layout::Layout()
{
    timeLabel->setFixedSize(150,25);
    timeLabel->setDigitCount(8);
    timeLabel->setStyleSheet("border: 1px solid  #000000");

    titleLabel->setFixedSize(150,25);
    titleLabel->setAlignment(Qt::AlignCenter);//设置字体居中对齐
    titleLabel->setText("新泰");

    weatherLabel->setFixedSize(150,25);
    weatherLabel->setStyleSheet("border: 1px solid  #000000");

    topLayout->addWidget(timeLabel);
    topLayout->addWidget(titleLabel);
    topLayout->addWidget(weatherLabel);

    frame->setBaseSize(600, 300);
    frame->setStyleSheet("border: 1px solid  #000000");
    framelayout->addWidget(frame);

    close->setText("关闭系统");
    start->setText("开启监控");
    in->setText("放大");
    out->setText("缩小");
    concrollayout->addWidget(close);
    concrollayout->addWidget(start);
    concrollayout->addWidget(in);
    concrollayout->addWidget(out);

    gllayout->addWidget(glWidget);

    buttonlayout->addWidget(work);
    buttonlayout->addWidget(parameter);
    buttonlayout->addWidget(Loadmeter);
    buttonlayout->addWidget(Waring);
    buttonlayout->addWidget(Towercrane);
    buttonlayout->addWidget(System);
    buttonlayout->addWidget(Constructionsite);
    buttonlayout->addWidget(area);
}

Layout :: ~Layout()
{
    delete timeLabel;
    delete titleLabel;
    delete weatherLabel;
    delete topLayout;

    delete frame;
    delete framelayout;
    delete glWidget;
    delete close;
    delete start;
    delete in;
    delete out;
    delete concrollayout;

    delete gllayout;
    delete work;
    delete parameter;
    delete Loadmeter;
    delete Waring;
    delete Towercrane;
    delete System;
    delete Constructionsite;
    delete area;
}
