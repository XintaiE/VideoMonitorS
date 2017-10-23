#ifndef SETTOWER_H
#define SETTOWER_H

#include <QWidget>

namespace Ui {
class SetTower;
}

class SetTower : public QWidget
{
    Q_OBJECT

public:
    explicit SetTower(QWidget *parent = 0);
    ~SetTower();

private:
    Ui::SetTower *ui;
};

#endif // SETTOWER_H
