#ifndef SEANCE_H
#define SEANCE_H

#include "date.h"
#include "time.h"
#include "movie.h"
#include "cinemaroom.h"

class Seance
{
    Date *date;
    Time *time;
    CinemaRoom *cinemaname;
    Movie *movie;
public:
    Seance();
};

#endif // SEANCE_H
