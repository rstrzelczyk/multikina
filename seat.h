#ifndef SEAT_H
#define SEAT_H

class Seat
{
    int row;
    int number;

    enum seat_state {free, reserved, other};
public:
       Seat(int row, int number);

        int getRow();
        int getNumber();
};


#endif // SEAT_H
