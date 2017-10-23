#include "setconstruction.h"
#include "ui_setconstruction.h"

SetConstruction::SetConstruction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetConstruction)
{
    ui->setupUi(this);
}

SetConstruction::~SetConstruction()
{
    delete ui;
}
