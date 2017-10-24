#-------------------------------------------------
#
# Project created by QtCreator 2017-09-27T13:42:35
#
#-------------------------------------------------

QT       += core gui sql

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
    setsystem.cpp

HEADERS  += wight.h \
    work.h \
    parameter.h \
    load.h \
    warning.h \
    area.h \
    tower.h \
    construction.h \
    setsystem.h

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

DISTFILES +=
LIBS += -lgetvalues

unix:!macx: LIBS += -L$$PWD/../../../ -lgetvalues

INCLUDEPATH += $$PWD/../../../
DEPENDPATH += $$PWD/../../../
