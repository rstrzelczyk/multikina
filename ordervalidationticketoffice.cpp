#include "ordervalidationticketoffice.h"
#include "ui_ordervalidationticketoffice.h"

OrderValidationTicketOffice::OrderValidationTicketOffice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderValidationTicketOffice)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
}

OrderValidationTicketOffice::~OrderValidationTicketOffice()
{
    delete ui;
}
