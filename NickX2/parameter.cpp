#include "parameter.h"
#include "ui_parameter.h"

parameter::parameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::parameter)
{
    ui->setupUi(this);
}

parameter::~parameter()
{
    delete ui;
}
