#ifndef TIME_H
#define TIME_H

class Time
{
    int hour;
    int minutes;

public:
    Time(int hour, int minutes);

    int getHour();
    int getMinutes();

};

#endif // TIME_H
