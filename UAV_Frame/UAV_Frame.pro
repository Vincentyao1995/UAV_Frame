#-------------------------------------------------
#
# Project created by QtCreator 2017-01-14T07:55:14
#
#-------------------------------------------------

QT       += core gui
QT       += webenginewidgets
QT 		 += multimedia
QT 		 += multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += mobility、MOBILITY = multimedia

TARGET = UAV_Frame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Dialog.cpp

HEADERS  += mainwindow.h \
    Dialog.h
	testdll.h
FORMS    += mainwindow.ui
OTHER_FILES += \
testdll.lib \
testdll.dll

INCLUDEPATH += F:\Program Files\MATLAB\R2015b\extern\include
INCLUDEPATH += F:\Program Files\MATLAB\R2015b\extern\include\win64

LIBS +=  E:\College\Code\QT\lib\microsoft\libmx.lib

LIBS +=  E:\College\Code\QT\lib\microsoft\mclmcr.lib

LIBS +=  E:\College\Code\QT\lib\microsoft\mclmcrrt.lib




