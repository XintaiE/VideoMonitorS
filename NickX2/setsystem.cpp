#include "setsystem.h"
#include "ui_setsystem.h"

setsystem::setsystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setsystem)
{
    ui->setupUi(this);
}

setsystem::~setsystem()
{
    delete ui;
}
