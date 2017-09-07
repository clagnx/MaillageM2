#-------------------------------------------------
#
# Project created by QtCreator 2017-09-04T17:38:43
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Maillage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp \
    face.cpp \
    gldisplay.cpp \
    mesh.cpp \
    triangle.cpp \
    carre.cpp

HEADERS  += mainwindow.h \
    point.h \
    face.h \
    gldisplay.h \
    mesh.h \
    triangle.h \
    carre.h

FORMS    += mainwindow.ui
