#ifndef MOVIE_H
#define MOVIE_H

#include <QString>

class Movie
{
    QString moviename;
public:
    Movie(QString moviename);

    QString getMoviename();
};

#endif // MOVIE_H
