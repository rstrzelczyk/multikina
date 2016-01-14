#include "numberreservedtickets.h"
#include "ui_numberreservedtickets.h"

NumberReservedTickets::NumberReservedTickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberReservedTickets)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_4->setPixmap(pix);

    ui->pushButton_back_2->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

   // ui->label_user_5->setText("Kasjer: "+employee->getUsername());

    ui->label_info_cancel->setVisible(false);
    ui->pushButton_cancel_2->setVisible(false);
}

NumberReservedTickets::~NumberReservedTickets()
{
    delete ui;
}

void NumberReservedTickets::on_pushButton_main_menu_back_2_clicked()
{
    NumberReservedTickets::close();
}

void NumberReservedTickets::on_pushButton_back_2_clicked()
{
    NumberReservedTickets::close();
}
