#include "building.h"

Building::Building(QString city, QString cinemaname, QString street)
{
    this->city=city;
    this->cinemaname=cinemaname;
    this->street=street;

}

QString Building::getCity()
{
    return city;
}

QString Building::getCinemaname()
{
    return cinemaname;
}

QString Building::getStreet()
{
    return street;
}

void Building::setSchedule(Schedule* s)
{
    this->schedule =s;
}
