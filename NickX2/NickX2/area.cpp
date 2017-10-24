#include "area.h"
#include "ui_area.h"

area::area(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::area)
{
    ui->setupUi(this);
}

area::~area()
{
    delete ui;
}
