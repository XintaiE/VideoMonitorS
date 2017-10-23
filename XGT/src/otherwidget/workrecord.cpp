#include "workrecord.h"
#include "ui_workrecord.h"

WorkRecord::WorkRecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkRecord)
{
    ui->setupUi(this);
}

WorkRecord::~WorkRecord()
{
    delete ui;
}
