#ifndef RESERVATIONCLASS_H
#define RESERVATIONCLASS_H

#include "client.h"
#include "building.h"
#include "seance.h"
#include "ticket.h"

class Reservationclass
{
    Client *client;
    Building *building;
    Seance *seance;
    Ticket *ticket;

public:
    Reservationclass();
};

#endif // RESERVATIONCLASS_H
