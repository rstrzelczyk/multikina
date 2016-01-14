#include "discount.h"

Discount::Discount()
{
}

StudentDiscount::StudentDiscount(int rabat)
{
    this->rabat=rabat;
}
SeniorDiscount::SeniorDiscount(int rabat)
{
    this->rabat=rabat;
}

LoyalityDiscount::LoyalityDiscount(int points)
{
    this->points=points;
}

int StudentDiscount::getRabat()
{
    return rabat;
}
int SeniorDiscount::getRabat()
{
    return rabat;
}
int LoyalityDiscount::getPoints()
{
    return points;
}

void StudentDiscount::count()
{

}
void SeniorDiscount::count()
{

}
void LoyalityDiscount::count()
{

}
