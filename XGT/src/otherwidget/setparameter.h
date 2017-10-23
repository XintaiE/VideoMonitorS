#ifndef SETPARAMETER_H
#define SETPARAMETER_H

#include <QWidget>

namespace Ui {
class SetParameter;
}

class SetParameter : public QWidget
{
    Q_OBJECT

public:
    explicit SetParameter(QWidget *parent = 0);
    ~SetParameter();

private:
    Ui::SetParameter *ui;
};

#endif // SETPARAMETER_H
