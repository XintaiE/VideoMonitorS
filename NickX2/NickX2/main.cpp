#include "wight.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    wight w;
    w.show();

    return a.exec();
}
