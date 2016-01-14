#include "seat.h"

Seat::Seat(int row, int number)
{
    this->row=row;
    this->number=number;
}

int Seat::getRow()
{
    return row;
}

int Seat::getNumber()
{
    return number;
}
