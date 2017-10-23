#ifndef LOADTABLE_H
#define LOADTABLE_H

#include <QWidget>

namespace Ui {
class LoadTable;
}

class LoadTable : public QWidget
{
    Q_OBJECT

public:
    explicit LoadTable(QWidget *parent = 0);
    ~LoadTable();

private:
    Ui::LoadTable *ui;
};

#endif // LOADTABLE_H
