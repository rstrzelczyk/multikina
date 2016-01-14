#include "ticket.h"

Ticket::Ticket(float pricewithdiscount, float pricewitoutdiscount)
{
    this->pricewithdiscount=pricewithdiscount;
    this->pricewitoutdiscount=pricewitoutdiscount;
}

float Ticket::getPricewithdiscount()
{
    return pricewithdiscount;
}

float Ticket::getPricewitoutdiscount()
{
    return pricewitoutdiscount;
}
