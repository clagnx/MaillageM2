#-------------------------------------------------
#
# Project created by QtCreator 2017-09-04T17:38:43
#
#-------------------------------------------------

QT       += core opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Maillage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp \
    face.cpp \
    gldisplay.cpp \
    mesh.cpp

HEADERS  += mainwindow.h \
    point.h \
    face.h \
    gldisplay.h \
    mesh.h

FORMS    += mainwindow.ui
