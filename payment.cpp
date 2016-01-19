#include "payment.h"
#include "ui_payment.h"

Payment::Payment(int totalprice, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_4->setPixmap(pix);

    ui->pushButton_back_2->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->label_price_2->setText(QString::number(totalprice));
}

Payment::~Payment()
{
    delete ui;
}

void Payment::on_pushButton_finish_clicked()
{
    Payment::close();
    AccountManager am;
    am.show();
}

void Payment::on_lineEdit_cash_editingFinished()
{
    int rest;
    rest=ui->lineEdit_cash->text().toInt()-ui->label_price_2->text().toInt();
    ui->label_rest_2->setText(QString::number(rest));
}
void Payment::on_lineEdit_cash_textChanged(const QString &arg1)
{
    int rest = ui->lineEdit_cash->text().toInt()-ui->label_price_2->text().toInt();
    ui->label_rest_2->setText(QString::number(rest));
}
