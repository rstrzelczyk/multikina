#ifndef SCHEDULE_H
#define SCHEDULE_H

#include<QList>

#include "seance.h"

class Schedule
{
    QList <Seance*>* Seances;

public:
    Schedule(QList<Seance*>*);


};

#endif // SCHEDULE_H
