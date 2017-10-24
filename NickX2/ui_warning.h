/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warning
{
public:

    void setupUi(QWidget *warning)
    {
        if (warning->objectName().isEmpty())
            warning->setObjectName(QStringLiteral("warning"));
        warning->resize(400, 300);

        retranslateUi(warning);

        QMetaObject::connectSlotsByName(warning);
    } // setupUi

    void retranslateUi(QWidget *warning)
    {
        warning->setWindowTitle(QApplication::translate("warning", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class warning: public Ui_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
