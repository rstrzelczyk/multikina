#include "time.h"

Time::Time(int hour, int minutes)
{
    this->hour=hour;
    this->minutes=minutes;
}

int Time::getHour()
{
   return hour;
}

int Time::getMinutes()
{
    return minutes;
}
