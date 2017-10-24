#-------------------------------------------------
#
# Project created by QtCreator 2017-09-27T13:42:35
#
#-------------------------------------------------

QT       += core gui sql
QT  += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NickX2
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += main.cpp\
        wight.cpp \
    work.cpp \
    parameter.cpp \
    load.cpp \
    warning.cpp \
    area.cpp \
    tower.cpp \
    construction.cpp \
    setsystem.cpp \
    Loadcpp/load3DS.cpp

HEADERS  += wight.h \
    work.h \
    parameter.h \
    load.h \
    warning.h \
    area.h \
    tower.h \
    construction.h \
    setsystem.h \
    include/HCNetSDK.h

FORMS    += wight.ui \
    work.ui \
    parameter.ui \
    load.ui \
    warning.ui \
    area.ui \
    tower.ui \
    construction.ui \
    setsystem.ui

RESOURCES += \
    images.qrc


unix:!macx: LIBS += -L$$PWD/lib/ -lgetvalues

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

LIBS += -lglut -lGLU

unix:!macx: LIBS += -L$$PWD/lib/ -lAudioRender

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lHCCore

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lhcnetsdk

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: LIBS += -L$$PWD/lib/ -lhpr

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
