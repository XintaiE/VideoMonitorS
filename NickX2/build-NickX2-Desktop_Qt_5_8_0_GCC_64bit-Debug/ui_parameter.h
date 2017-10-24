/********************************************************************************
** Form generated from reading UI file 'parameter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETER_H
#define UI_PARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parameter
{
public:

    void setupUi(QWidget *parameter)
    {
        if (parameter->objectName().isEmpty())
            parameter->setObjectName(QStringLiteral("parameter"));
        parameter->resize(400, 300);

        retranslateUi(parameter);

        QMetaObject::connectSlotsByName(parameter);
    } // setupUi

    void retranslateUi(QWidget *parameter)
    {
        parameter->setWindowTitle(QApplication::translate("parameter", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class parameter: public Ui_parameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETER_H
