#include "orderinformation.h"
#include "ui_orderinformation.h"

OrderInformation::OrderInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderInformation)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
}

OrderInformation::~OrderInformation()
{
    delete ui;
}
