#include "setsystem.h"
#include "ui_setsystem.h"

SetSystem::SetSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetSystem)
{
    ui->setupUi(this);
}

SetSystem::~SetSystem()
{
    delete ui;
}
