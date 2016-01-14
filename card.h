#ifndef CARD_H
#define CARD_H

class Card
{
    int number;
    int points;
public:
    Card( int number, int points);

    int getNumber();
    int getPoints();
};

#endif // CARD_H
