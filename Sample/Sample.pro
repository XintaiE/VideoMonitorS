#-------------------------------------------------
#
# Project created by QtCreator 2017-09-20T08:46:40
#
#-------------------------------------------------

QT       += core gui
QT  += opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sample
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        dialog.cpp \
    layout.cpp \
    openglwidget.cpp \
    meshModel.cpp \
    Loadcpp/load3DS.cpp

HEADERS += \
        dialog.h \
    include/HCNetSDK.h \
    layout.h \
    openglwidget.h \
    meshModel.h \
    include/Load3DS.h


unix:!macx: LIBS += -L$$PWD/lib/ -lHCCore

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lhcnetsdk

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
unix:!macx: LIBS += -L$$PWD/lib/ -lhpr

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lAudioRender

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lPlayCtrl

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lSuperRender

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lanalyzedata

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCAlarm

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCAlarm

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCCoreDevCfg

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCDisplay

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCGeneralCfgMgr

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCIndustry

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCPlayBack

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCPreview

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lHCVoiceTalk

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -liconv2

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lStreamTransClient

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

unix:!macx: LIBS += -L$$PWD/lib/HCNetSDKCom/ -lSystemTransform

INCLUDEPATH += $$PWD/lib/HCNetSDKCom
DEPENDPATH += $$PWD/lib/HCNetSDKCom

LIBS += -lglut -lGLU
