#ifndef AREA_H
#define AREA_H

#include <QWidget>

namespace Ui {
class area;
}

class area : public QWidget
{
    Q_OBJECT

public:
    explicit area(QWidget *parent = 0);
    ~area();

private:
    Ui::area *ui;
};

#endif // AREA_H//
