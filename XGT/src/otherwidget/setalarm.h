#ifndef SETALARM_H
#define SETALARM_H

#include <QWidget>

namespace Ui {
class SetAlarm;
}

class SetAlarm : public QWidget
{
    Q_OBJECT

public:
    explicit SetAlarm(QWidget *parent = 0);
    ~SetAlarm();

private:
    Ui::SetAlarm *ui;
};

#endif // SETALARM_H
