#ifndef TOWER_H
#define TOWER_H

#include <QWidget>

namespace Ui {
class tower;
}

class tower : public QWidget
{
    Q_OBJECT

public:
    explicit tower(QWidget *parent = 0);
    ~tower();

private:
    Ui::tower *ui;
};

#endif // TOWER_H
