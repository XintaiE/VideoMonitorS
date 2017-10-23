#ifndef SETCONSTRUCTION_H
#define SETCONSTRUCTION_H

#include <QWidget>

namespace Ui {
class SetConstruction;
}

class SetConstruction : public QWidget
{
    Q_OBJECT

public:
    explicit SetConstruction(QWidget *parent = 0);
    ~SetConstruction();

private:
    Ui::SetConstruction *ui;
};

#endif // SETCONSTRUCTION_H
