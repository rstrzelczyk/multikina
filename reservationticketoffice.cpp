#include "reservationticketoffice.h"
#include "ui_reservationticketoffice.h"

ReservationTicketOffice::ReservationTicketOffice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservationTicketOffice)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
}

ReservationTicketOffice::~ReservationTicketOffice()
{
    delete ui;
}
