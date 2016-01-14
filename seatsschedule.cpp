#include "seatsschedule.h"
#include "ui_seatsschedule.h"

SeatsSchedule::SeatsSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeatsSchedule)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
}

SeatsSchedule::~SeatsSchedule()
{
    delete ui;
}

void SeatsSchedule::on_pushButton_next_clicked()
{
    OrderInformation *orderinformation = new OrderInformation();
    orderinformation->exec();
    delete orderinformation;
}

void SeatsSchedule::on_pushButton_back_2_clicked()
{
    SeatsSchedule::close();
}
