#include "settower.h"
#include "ui_settower.h"

SetTower::SetTower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetTower)
{
    ui->setupUi(this);
}

SetTower::~SetTower()
{
    delete ui;
}
