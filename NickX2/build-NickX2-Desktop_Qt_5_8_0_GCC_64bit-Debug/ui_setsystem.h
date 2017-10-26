/********************************************************************************
** Form generated from reading UI file 'setsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSYSTEM_H
#define UI_SETSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setsystem
{
public:

    void setupUi(QWidget *setsystem)
    {
        if (setsystem->objectName().isEmpty())
            setsystem->setObjectName(QStringLiteral("setsystem"));
        setsystem->resize(400, 300);

        retranslateUi(setsystem);

        QMetaObject::connectSlotsByName(setsystem);
    } // setupUi

    void retranslateUi(QWidget *setsystem)
    {
        setsystem->setWindowTitle(QApplication::translate("setsystem", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class setsystem: public Ui_setsystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSYSTEM_H
