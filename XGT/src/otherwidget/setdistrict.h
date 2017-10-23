#ifndef SETDISTRICT_H
#define SETDISTRICT_H

#include <QWidget>

namespace Ui {
class SetDistrict;
}

class SetDistrict : public QWidget
{
    Q_OBJECT

public:
    explicit SetDistrict(QWidget *parent = 0);
    ~SetDistrict();

private:
    Ui::SetDistrict *ui;
};

#endif // SETDISTRICT_H
