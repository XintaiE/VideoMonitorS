#ifndef WORKRECORD_H
#define WORKRECORD_H

#include <QWidget>

namespace Ui {
class WorkRecord;
}

class WorkRecord : public QWidget
{
    Q_OBJECT

public:
    explicit WorkRecord(QWidget *parent = 0);
    ~WorkRecord();

private:
    Ui::WorkRecord *ui;
};

#endif // WORKRECORD_H
