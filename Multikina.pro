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
    mainwindow.cpp \
    main.cpp \
    time.cpp \
    ticketmanager.cpp \
    ticket.cpp \
    seatsschedule.cpp \
    seat.cpp \
    searchclientwindow.cpp \
    seance.cpp \
    schedule.cpp \
    reservationticketoffice.cpp \
    reservationclass.cpp \
    reservation.cpp \
    repertoir.cpp \
    payment.cpp \
    ordervalidationticketoffice.cpp \
    orderinformation.cpp \
    numberreservedtickets.cpp \
    newclientaccountform.cpp \
    movie.cpp \
    employeerepository.cpp \
    employeedataform.cpp \
    employee.cpp \
    discount.cpp \
    date.cpp \
    clientrepository.cpp \
    clientaccountform.cpp \
    client.cpp \
    cinemaroom.cpp \
    chain.cpp \
    cardscanwindow.cpp \
    cardloadwindow.cpp \
    card.cpp \
    calender.cpp \
    buildinglist.cpp \
    building.cpp \
    accountmanager.cpp \
    cinemabuildingrepertoirschedule.cpp \
    buildingrepository.cpp

HEADERS  += \
    mainwindow.h \
    time.h \
    ticketmanager.h \
    ticket.h \
    seatsschedule.h \
    seat.h \
    searchclientwindow.h \
    seance.h \
    schedule.h \
    reservationticketoffice.h \
    reservationclass.h \
    reservation.h \
    repertoir.h \
    payment.h \
    ordervalidationticketoffice.h \
    orderinformation.h \
    numberreservedtickets.h \
    newclientaccountform.h \
    movie.h \
    employeerepository.h \
    employeedataform.h \
    employee.h \
    discount.h \
    date.h \
    clientrepository.h \
    clientaccountform.h \
    client.h \
    cinemaroom.h \
    chain.h \
    cardscanwindow.h \
    cardloadwindow.h \
    card.h \
    calender.h \
    buildinglist.h \
    building.h \
    accountmanager.h \
    cinemabuildingrepertoirschedule.h \
    buildingrepository.h

FORMS    += \
    mainwindow.ui \
    seatsschedule.ui \
    searchclientwindow.ui \
    reservationticketoffice.ui \
    reservation.ui \
    payment.ui \
    ordervalidationticketoffice.ui \
    orderinformation.ui \
    numberreservedtickets.ui \
    newclientaccountform.ui \
    employeedataform.ui \
    clientaccountform.ui \
    cardscanwindow.ui \
    cardloadwindow.ui \
    calender.ui \
    buildinglist.ui \
    cinemabuildingrepertoirschedule.ui

RESOURCES += \
    logo.qrc

OTHER_FILES += \
    object_script.Multikina.Release \
    object_script.Multikina.Debug
