#include "cinemaroom.h"

CinemaRoom::CinemaRoom(int number_of_places, int numberof_free_places, int number_of_reserved_places, int number_of_rows, QString roomname)
{
    this->number_of_places=number_of_places;
    this->numberof_free_places=numberof_free_places;
    this->number_of_reserved_places=number_of_reserved_places;
    this->number_of_rows=number_of_rows;
    this->roomname=roomname;
}

int CinemaRoom::getNumber_of_places()
{
    return number_of_places;
}

int CinemaRoom::getNumberof_free_places()
{
    return numberof_free_places;
}

int CinemaRoom::getnumber_of_reserved_places()
{
    return number_of_reserved_places;
}

int CinemaRoom::getNumber_of_rows()
{
    return number_of_rows;
}

QString CinemaRoom::getRoomname()
{
    return roomname;
}
