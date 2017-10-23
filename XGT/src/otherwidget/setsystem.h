#ifndef SETSYSTEM_H
#define SETSYSTEM_H

#include <QWidget>

namespace Ui {
class SetSystem;
}

class SetSystem : public QWidget
{
    Q_OBJECT

public:
    explicit SetSystem(QWidget *parent = 0);
    ~SetSystem();

private:
    Ui::SetSystem *ui;
};

#endif // SETSYSTEM_H
