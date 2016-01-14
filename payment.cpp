#include "payment.h"
#include "ui_payment.h"

Payment::Payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
}

Payment::~Payment()
{
    delete ui;
}
