/********************************************************************************
** Form generated from reading UI file 'load.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_H
#define UI_LOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_load
{
public:

    void setupUi(QWidget *load)
    {
        if (load->objectName().isEmpty())
            load->setObjectName(QStringLiteral("load"));
        load->resize(542, 438);

        retranslateUi(load);

        QMetaObject::connectSlotsByName(load);
    } // setupUi

    void retranslateUi(QWidget *load)
    {
        load->setWindowTitle(QApplication::translate("load", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class load: public Ui_load {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_H
