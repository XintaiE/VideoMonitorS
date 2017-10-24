/********************************************************************************
** Form generated from reading UI file 'wight.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIGHT_H
#define UI_WIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wight
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *ltower;
    QLabel *ltext;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *tbcn;
    QLabel *lload;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lcrane;
    QToolButton *tbconstruction;
    QToolButton *tbarea;
    QToolButton *tbwarning;
    QToolButton *tbload;
    QToolButton *tbparameter;
    QToolButton *tbwork;
    QToolButton *tbsystem;
    QToolButton *tbtower;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *wight)
    {
        if (wight->objectName().isEmpty())
            wight->setObjectName(QStringLiteral("wight"));
        wight->setEnabled(true);
        wight->resize(635, 485);
        wight->setMinimumSize(QSize(635, 485));
        wight->setMaximumSize(QSize(635, 485));
        wight->setStyleSheet(QLatin1String("\n"
"background-color: rgb(186, 189, 182);"));
        centralWidget = new QWidget(wight);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 171, 17));
        ltower = new QLabel(centralWidget);
        ltower->setObjectName(QStringLiteral("ltower"));
        ltower->setGeometry(QRect(0, 20, 81, 17));
        ltext = new QLabel(centralWidget);
        ltext->setObjectName(QStringLiteral("ltext"));
        ltext->setGeometry(QRect(240, 7, 67, 31));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 40, 631, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tbcn = new QToolButton(centralWidget);
        tbcn->setObjectName(QStringLiteral("tbcn"));
        tbcn->setGeometry(QRect(560, 10, 71, 24));
        lload = new QLabel(centralWidget);
        lload->setObjectName(QStringLiteral("lload"));
        lload->setGeometry(QRect(0, 200, 67, 17));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 220, 361, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(370, 220, 261, 141));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lcrane = new QLabel(centralWidget);
        lcrane->setObjectName(QStringLiteral("lcrane"));
        lcrane->setGeometry(QRect(370, 200, 67, 17));
        tbconstruction = new QToolButton(centralWidget);
        tbconstruction->setObjectName(QStringLiteral("tbconstruction"));
        tbconstruction->setGeometry(QRect(560, 370, 71, 41));
        tbarea = new QToolButton(centralWidget);
        tbarea->setObjectName(QStringLiteral("tbarea"));
        tbarea->setGeometry(QRect(320, 370, 71, 41));
        tbwarning = new QToolButton(centralWidget);
        tbwarning->setObjectName(QStringLiteral("tbwarning"));
        tbwarning->setGeometry(QRect(240, 370, 71, 41));
        tbload = new QToolButton(centralWidget);
        tbload->setObjectName(QStringLiteral("tbload"));
        tbload->setGeometry(QRect(160, 370, 71, 41));
        tbparameter = new QToolButton(centralWidget);
        tbparameter->setObjectName(QStringLiteral("tbparameter"));
        tbparameter->setGeometry(QRect(80, 370, 71, 41));
        tbwork = new QToolButton(centralWidget);
        tbwork->setObjectName(QStringLiteral("tbwork"));
        tbwork->setGeometry(QRect(0, 370, 71, 41));
        tbsystem = new QToolButton(centralWidget);
        tbsystem->setObjectName(QStringLiteral("tbsystem"));
        tbsystem->setGeometry(QRect(480, 370, 71, 41));
        tbtower = new QToolButton(centralWidget);
        tbtower->setObjectName(QStringLiteral("tbtower"));
        tbtower->setGeometry(QRect(400, 370, 71, 41));
        wight->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(wight);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 28));
        wight->setMenuBar(menuBar);
        mainToolBar = new QToolBar(wight);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        wight->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(wight);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        wight->setStatusBar(statusBar);

        retranslateUi(wight);

        QMetaObject::connectSlotsByName(wight);
    } // setupUi

    void retranslateUi(QMainWindow *wight)
    {
        wight->setWindowTitle(QApplication::translate("wight", "wight", Q_NULLPTR));
        label->setText(QApplication::translate("wight", "TextLabel", Q_NULLPTR));
        ltower->setText(QApplication::translate("wight", "TextLabel", Q_NULLPTR));
        ltext->setText(QApplication::translate("wight", "TextLabel", Q_NULLPTR));
        tbcn->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        lload->setText(QApplication::translate("wight", "TextLabel", Q_NULLPTR));
        lcrane->setText(QApplication::translate("wight", "TextLabel", Q_NULLPTR));
        tbconstruction->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbarea->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbwarning->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbload->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbparameter->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbwork->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbsystem->setText(QApplication::translate("wight", "...", Q_NULLPTR));
        tbtower->setText(QApplication::translate("wight", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class wight: public Ui_wight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIGHT_H
