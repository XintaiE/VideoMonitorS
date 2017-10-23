#include "setdistrict.h"
#include "ui_setdistrict.h"

SetDistrict::SetDistrict(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetDistrict)
{
    ui->setupUi(this);
}

SetDistrict::~SetDistrict()
{
    delete ui;
}
