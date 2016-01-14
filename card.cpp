#include "card.h"

Card::Card(int number, int points)
{
    this->number=number;
    this->points=points;
}

int Card::getNumber()
{
    return number;
}

int Card::getPoints()
{
    return points;
}
