#ifndef SETSYSTEM_H
#define SETSYSTEM_H

#include <QWidget>

namespace Ui {
class setsystem;
}

class setsystem : public QWidget
{
    Q_OBJECT

public:
    explicit setsystem(QWidget *parent = 0);
    ~setsystem();

private:
    Ui::setsystem *ui;
};

#endif // SETSYSTEM_H
