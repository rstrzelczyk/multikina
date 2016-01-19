#ifndef BUILDING_H
#define BUILDING_H

#include "cinemaroom.h"
#include "schedule.h"

#include<QString>
#include <QList>

class Building
{
    QString city;
    QString cinemaname;
    QString street;

    QList <CinemaRoom> CinemaRooms;

    Schedule *schedule;

public:
    Building(QString city, QString cinemaname, QString street);

    QString getCity();
    QString getCinemaname();
    QString getStreet();
    void setSchedule(Schedule*);
};

#endif // BUILDING_H
