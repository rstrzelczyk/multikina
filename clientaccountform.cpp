#include "clientaccountform.h"
#include "ui_clientaccountform.h"

ClientAccountForm::ClientAccountForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientAccountForm)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_2->setPixmap(pix);
}

ClientAccountForm::~ClientAccountForm()
{
    delete ui;
}

void ClientAccountForm::on_pushButton_back_clicked()
{
    ClientAccountForm::close();
}

void ClientAccountForm::on_pushButton_confitm_discount_clicked()
{
    ui->label_info_2->setText("Zniżka została potwierdzona.");
}

void ClientAccountForm::on_pushButton_confim_account_clicked()
{
    ui->label_info_2->setText("Potwierdzono konto klienta.");
}
