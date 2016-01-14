#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H


#include "reservationclass.h"
#include "ticket.h"
#include "client.h"

class TicketManager
{
    Client *client;
    Reservationclass *reservation;
    Ticket *ticket;
public:
    TicketManager();
};

#endif // TICKETMANAGER_H
