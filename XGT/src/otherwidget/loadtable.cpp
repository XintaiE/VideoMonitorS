#include "loadtable.h"
#include "ui_loadtable.h"

LoadTable::LoadTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoadTable)
{
    ui->setupUi(this);
}

LoadTable::~LoadTable()
{
    delete ui;
}
