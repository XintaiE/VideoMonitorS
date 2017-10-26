/********************************************************************************
** Form generated from reading UI file 'construction.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRUCTION_H
#define UI_CONSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_construction
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_12;
    QLineEdit *lineEdit_10;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *construction)
    {
        if (construction->objectName().isEmpty())
            construction->setObjectName(QStringLiteral("construction"));
        construction->resize(360, 210);
        layoutWidget = new QWidget(construction);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 341, 192));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 2, 1, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_2->addWidget(lineEdit_7, 3, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_2->addWidget(lineEdit_8, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_2->addWidget(lineEdit_9);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout_2->addWidget(lineEdit_10);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(construction);

        QMetaObject::connectSlotsByName(construction);
    } // setupUi

    void retranslateUi(QWidget *construction)
    {
        construction->setWindowTitle(QApplication::translate("construction", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("construction", "\345\233\236\350\275\254\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("construction", "B\347\202\271   X", Q_NULLPTR));
        label_2->setText(QApplication::translate("construction", "A\347\202\271   X", Q_NULLPTR));
        label_3->setText(QApplication::translate("construction", "A\347\202\271   Y", Q_NULLPTR));
        label_5->setText(QApplication::translate("construction", "B\347\202\271   Y", Q_NULLPTR));
        label_6->setText(QApplication::translate("construction", "\350\267\235\347\246\273\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("construction", "\345\260\217\350\275\246\346\212\245\350\255\246\350\256\276\347\275\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("construction", "\345\233\236\350\275\254\346\212\245\350\255\246\350\256\276\347\275\256", Q_NULLPTR));
        label_9->setText(QApplication::translate("construction", "\345\233\236\350\275\254\351\242\204\350\255\246\350\256\276\347\275\256", Q_NULLPTR));
        label_10->setText(QApplication::translate("construction", "\345\260\217\350\275\246\351\242\204\350\255\246\350\256\276\347\275\256", Q_NULLPTR));
        label_11->setText(QApplication::translate("construction", "\345\217\215\351\241\266\346\227\266\351\227\264", Q_NULLPTR));
        label_12->setText(QApplication::translate("construction", "\346\203\257\346\200\247\350\247\222\345\272\246", Q_NULLPTR));
        pushButton->setText(QApplication::translate("construction", "\344\270\273\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class construction: public Ui_construction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRUCTION_H
