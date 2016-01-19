#-------------------------------------------------
#
# Project created by QtCreator 2015-12-27T13:23:43
#
#-------------------------------------------------

QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Multikina
TEMPLATE = app

SOURCES += \
    accountmanager.cpp \
    main.cpp \
    loginwindow.cpp \
    employeerepository.cpp \
    employee.cpp \
    building.cpp \
    schedule.cpp \
    buildingrepository.cpp \
    schedulewindow.cpp \
    employeedataform.cpp \
    calender.cpp \
    loginwindow2.cpp \
    searchclientwindow.cpp \
    buildinglist.cpp \
    clientrepository.cpp \
    client.cpp \
    seance.cpp

HEADERS  += \
    accountmanager.h \
    loginwindow.h \
    employeerepository.h \
    employee.h \
    building.h \
    schedule.h \
    buildingrepository.h \
    schedulewindow.h \
    employeedataform.h \
    calender.h \
    loginwindow2.h \
    searchclientwindow.h \
    buildinglist.h \
    clientrepository.h \
    client.h \
    seance.h

FORMS    += \
    loginwindow.ui \
    schedulewindow.ui \
    employeedataform.ui \
    calender.ui \
    loginwindow2.ui \
    searchclientwindow.ui \
    buildinglist.ui

RESOURCES += \
    logo.qrc

OTHER_FILES +=
