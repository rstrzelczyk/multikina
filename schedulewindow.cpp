#include "schedulewindow.h"
#include "ui_schedulewindow.h"

ScheduleWindow::ScheduleWindow(Employee *e, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScheduleWindow)
{
    ui->setupUi(this);
    employee =e;
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    setWindowTitle(tr("Multikina"));
    ui->label_user->setText("Kasjer: "+employee->getUsername());

    //ui->label_building->setText("Budynek: " + );
    DateSelected = QDate::currentDate();
    ui->dateEdit->hide();
    connect(&stoper, SIGNAL(timeout()), this, SLOT(refreshTime()));
    refreshTime();
    ui->dateEdit->date().toString("dd.MM.yyyy");
    ui->dateEdit->setDate(DateSelected);
    ui->lineEdit_date->setText(DateSelected.toString("dd.MM.yyyy"));
}

ScheduleWindow::~ScheduleWindow()
{
    delete ui;
}

void ScheduleWindow::refreshTime()
{
    stoper.start(TIME_REFRESH);
}

void ScheduleWindow::on_pushButton_logout_clicked()
{
    ScheduleWindow::close();
    AccountManager am;
    am.show();
}

void ScheduleWindow::on_pushButton_modyfydata_clicked()
{
    ScheduleWindow::close();
    AccountManager am;
    am.ShowEmployeeDataForm(employee);
}

void ScheduleWindow::on_pushButton_tomorrow_clicked()
{
    DateSelected = QDate::currentDate();
    if(ui->pushButton_tomorrow->text()=="Jutro")
    {
        if(DateSelected.dayOfYear() - QDate::currentDate().dayOfYear() ==0)
        {
            DateSelected = DateSelected.addDays(1);
            ui->lineEdit_date->setText(DateSelected.toString("dd.MM.yyyy"));
            ui->dateEdit->setDate(DateSelected);
            ui->pushButton_tomorrow->setText("Dzisiaj");
        }
    }
    else
    {
        DateSelected = QDate::currentDate();
        ui->lineEdit_date->setText(DateSelected.toString("dd.MM.yyyy"));
        ui->dateEdit->setDate(DateSelected);
        ui->pushButton_tomorrow->setText("Jutro");
    }
}

void ScheduleWindow::on_pushButton_otherday_clicked()
{
    Calender *CalenderForm = new Calender();
    CalenderForm->exec();
    ui->dateEdit->setDate(CalenderForm->Choice_Date);
    ui->lineEdit_date->setText(CalenderForm->Choice_Date.toString("dd.MM.yyyy"));
    delete CalenderForm;
}

void ScheduleWindow::on_pushButton_client_account_clicked()
{
    ScheduleWindow::close();
    AccountManager am;
    am.ShowSearchclientwindow(employee);
}
