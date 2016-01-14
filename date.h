#ifndef DATE_H
#define DATE_H

class Date
{
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);

    int getDay();
    int getMonth();
    int getYear();
};

#endif // DATE_H
