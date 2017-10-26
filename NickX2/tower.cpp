#include "tower.h"
#include "ui_tower.h"

tower::tower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tower)
{
    ui->setupUi(this);
}

tower::~tower()
{
    delete ui;
}
