#ifndef PARAMETER_H
#define PARAMETER_H

#include <QWidget>


namespace Ui {
class parameter;
}

class parameter : public QWidget
{
    Q_OBJECT

public:
    explicit parameter(QWidget *parent = 0);
    ~parameter();

private:
    Ui::parameter *ui;
};

#endif // PARAMETER_H
