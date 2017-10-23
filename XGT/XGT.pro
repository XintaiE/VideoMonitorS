#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T09:38:23
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XGT
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


include(/mnt/hgfs/E/XGT/src/mainwidget/mainwidget.pri)
include(/mnt/hgfs/E/XGT/src/database/database.pri)
include(/mnt/hgfs/E/XGT/src/otherwidget/otherwidget.pri)


INCLUDEPATH +=$$PWD/mnt/hgfs/E/XGT/src/mainwidget
INCLUDEPATH +=$$PWD/mnt/hgfs/E/XGT/src/database
INCLUDEPATH +=$$PWD/mnt/hgfs/E/XGT/src/otherwidget


DESTDIR = /mnt/hgfs/E/XGT/bin

RESOURCES += \
    images.qrc

DISTFILES +=

