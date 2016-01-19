#include "ordervalidationticketoffice.h"
#include "ui_ordervalidationticketoffice.h"

OrderValidationTicketOffice::OrderValidationTicketOffice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderValidationTicketOffice)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_5->setPixmap(pix);

    ui->pushButton_back_3->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");
}

OrderValidationTicketOffice::~OrderValidationTicketOffice()
{
    delete ui;
}
void OrderValidationTicketOffice::on_pushButton_finish_2_clicked()
{
    OrderValidationTicketOffice::close();
    AccountManager am;
    am.show();
}
