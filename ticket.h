#ifndef TICKET_H
#define TICKET_H

#include "seat.h"
#include "cinemaroom.h"
#include "discount.h"

class Ticket
{
    Seat *seat;
    CinemaRoom *cinemaroom;
    Discount *discount;

    float pricewithdiscount;
    float pricewitoutdiscount;

public:
    Ticket(float pricewithdiscount, float pricewitoutdiscount);

    float getPricewithdiscount();

    float getPricewitoutdiscount();
};

#endif // TICKET_H
