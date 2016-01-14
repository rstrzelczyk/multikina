#ifndef CINEMAROOM_H
#define CINEMAROOM_H

#include"seat.h"

#include <QList>
#include<QString>

class CinemaRoom
{
public:
    int number_of_places;
    int numberof_free_places;
    int number_of_reserved_places;
    int number_of_rows;
    QString roomname;

    QList<Seat> seats;

    CinemaRoom(int number_of_places, int numberof_free_places, int number_of_reserved_places, int number_of_rows, QString roomname);

    int getNumber_of_places();
    int getNumberof_free_places();
    int getnumber_of_reserved_places();
    int getNumber_of_rows();
    QString getRoomname();
};


#endif // CINEMAROOM_H
