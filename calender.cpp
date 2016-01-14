#include "calender.h"
#include "ui_calender.h"

Calender::Calender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calender)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    ui->calendarWidget->setGridVisible(true);
    ui->calendarWidget->setMinimumDate(QDate::currentDate());
}

Calender::~Calender()
{
    delete ui;
}

void Calender::on_calendarWidget_clicked(const QDate &date)
{
    Choice_Date=date;
    Calender::close();
}
