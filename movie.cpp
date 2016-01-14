#include "movie.h"

Movie::Movie(QString moviename)
{
    this->moviename=moviename;
}

QString Movie::getMoviename()
{
    return moviename;
}
