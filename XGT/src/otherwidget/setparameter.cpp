#include "setparameter.h"
#include "ui_setparameter.h"

SetParameter::SetParameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetParameter)
{
    ui->setupUi(this);
}

SetParameter::~SetParameter()
{
    delete ui;
}
