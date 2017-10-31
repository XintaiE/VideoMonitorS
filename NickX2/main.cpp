#include "wight.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* QFile file(":/CSS/style.css");
    file.open(QFile::ReadOnly);
    QString css = QLatin1String(file.readAll());
    qApp->setStyleSheet(css);
   */
    wight w;
    w.show();

    return a.exec();
}
