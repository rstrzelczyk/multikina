#include "orderinformation.h"
#include "ui_orderinformation.h"
#include <QMessageBox>

OrderInformation::OrderInformation(Employee *e, int totalnumber, int totalprice, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderInformation)
{
    ui->setupUi(this);
    employee=e;
    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_3->setPixmap(pix);

    ui->pushButton_back->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->pushButton_main_menu_back->setVisible(false);
    ui->label_info_3->setVisible(false);
    ui->label_allticketsprice_2->setText(QString::number(totalprice));
    ui->label_numberofticket_2->setText(QString::number(totalnumber));
}

OrderInformation::~OrderInformation()
{
    delete ui;
}

void OrderInformation::on_pushButton_cash_clicked()
{
    OrderInformation::close();
    Payment *p=new Payment(ui->label_allticketsprice_2->text().toInt());
    p->show();
}

void OrderInformation::on_pushButton_card_clicked()
{
    QMessageBox::information(
                this,
                tr("Multikina"),
                tr("Wczytaj kartę płatniczą.") );
    OrderInformation::close();
    OrderValidationTicketOffice *ovto = new OrderValidationTicketOffice();
    ovto->show();
}

void OrderInformation::on_pushButton_back_clicked()
{
    OrderInformation::close();
    AccountManager am;
    am.show();
}

void OrderInformation::on_pushButton_logout_clicked()
{
    OrderInformation::close();
    AccountManager am;
    am.show();
}
