#ifndef RESERVATIONTICKETOFFICE_H
#define RESERVATIONTICKETOFFICE_H

#include <QDialog>

namespace Ui {
class ReservationTicketOffice;
}

class ReservationTicketOffice : public QDialog
{
    Q_OBJECT
    
public:
    explicit ReservationTicketOffice(QWidget *parent = 0);
    ~ReservationTicketOffice();
    
private:
    Ui::ReservationTicketOffice *ui;
};

#endif // RESERVATIONTICKETOFFICE_H
