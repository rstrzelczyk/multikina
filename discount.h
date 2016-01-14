#ifndef DISCOUNT_H
#define DISCOUNT_H

class Discount
{
    enum discountstate { valid, invalid};
public:
    Discount();
    void count();
};

class StudentDiscount : public Discount
{
    int rabat;
public:
    StudentDiscount(int rabat);

    void count();
    int getRabat();
};

class SeniorDiscount : public Discount
{
    int rabat;
public:
    SeniorDiscount(int rabat);

    void count();
    int getRabat();
};

class LoyalityDiscount : public Discount
{
    int points;
public:
    LoyalityDiscount(int points);

    void count();
    int getPoints();
};

#endif // DISCOUNT_H
