#include "schedulewindow.h"
#include "ui_schedulewindow.h"

ScheduleWindow::ScheduleWindow(AccountManager* am,Employee *e, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScheduleWindow)
{
    this->am=am;
    ui->setupUi(this);
    employee =e;
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    setWindowTitle(tr("Multikina"));
    ui->label_user->setText("Kasjer: "+employee->getUsername());
    EmployeeRepository ER;
    QString buildingname =ER.findbuilding(employee->getUsername(), employee->getPassword());
    ui->label_building->setText("Budynek: " + buildingname);
    DateSelected = QDate::currentDate();
    ui->dateEdit->hide();
    connect(&stoper, SIGNAL(timeout()), this, SLOT(refreshTime()));
    refreshTime();
    ui->dateEdit->date().toString("dd.MM.yyyy");
    ui->dateEdit->setDate(DateSelected);
    ui->lineEdit_date->setText(DateSelected.toString("dd.MM.yyyy"));

    QString Date = ui->dateEdit->text();
    QString Time=QTime::currentTime().toString();
    QSqlQueryModel *model = new QSqlQueryModel;
    //QSqlQueryModel *model2 = new QSqlQueryModel;
    QString sql_select;
    if( Date == QDate::currentDate().toString("yyyy-MM-dd"))
    {
        sql_select = ER.refreshscheduletoday(buildingname , Date, Time);
    }
    else
    {
        sql_select = ER.refreshscheduleotherdays(buildingname , Date);
    }

    //model2->setQuery(sql_select);
    //int j=0;
    //model->record(1).value(0)=model2->record(1).value(0);
    //model->record(1).value(1)=model2->record(1).value(1);
    //for (int i=1; i< model2->rowCount(); i++)
    //{
       // if (model2->record(i).value(0)==model2->record(i-1).value(0))
       // {

            //j++;
        //}
    //}
    //model->setQuery(sql_select);
    ui->tableView_schedule->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("Tytuł filmu"));
    for (int i=1; i< model->columnCount(); i++)
    {
        model->setHeaderData(i, Qt::Horizontal, tr("Godzina"));
    }
        //model->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
       // model->setHeaderData(2, Qt::Horizontal, tr("Data"));
    ui->tableView_schedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_schedule->setColumnHidden(2,true);
}

ScheduleWindow::ScheduleWindow(Employee *e, QWidget *parent)
{
    ui->setupUi(this);
    employee =e;
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    setWindowTitle(tr("Multikina"));
    ui->label_user->setText("Kasjer: "+employee->getUsername());
    EmployeeRepository ER;
    QString buildingname =ER.findbuilding(employee->getUsername(), employee->getPassword());
    ui->label_building->setText("Budynek: " + buildingname);
    DateSelected = QDate::currentDate();
    ui->dateEdit->hide();
    connect(&stoper, SIGNAL(timeout()), this, SLOT(refreshTime()));
    refreshTime();
    ui->dateEdit->date().toString("dd.MM.yyyy");
    ui->dateEdit->setDate(DateSelected);
    ui->lineEdit_date->setText(DateSelected.toString("dd.MM.yyyy"));

    QString Date = ui->dateEdit->text();
    QString Time=QTime::currentTime().toString();
    QSqlQueryModel *model = new QSqlQueryModel;
    //QSqlQueryModel *model2 = new QSqlQueryModel;
    QString sql_select;
    if( Date == QDate::currentDate().toString("yyyy-MM-dd"))
    {
        sql_select = ER.refreshscheduletoday(buildingname , Date, Time);
    }
    else
    {
        sql_select = ER.refreshscheduleotherdays(buildingname , Date);
    }

    ui->tableView_schedule->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("Tytuł filmu"));
    for (int i=1; i< model->columnCount(); i++)
    {
        model->setHeaderData(i, Qt::Horizontal, tr("Godzina"));
    }
        //model->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
       // model->setHeaderData(2, Qt::Horizontal, tr("Data"));
    ui->tableView_schedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_schedule->setColumnHidden(2,true);
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
    am->show();
    ScheduleWindow::close();
    //AccountManager am;
    //am.show();
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
    EmployeeRepository ER;
    QString buildingname =ER.findbuilding(employee->getUsername(), employee->getPassword());
    ui->label_building->setText("Budynek: " + buildingname);
    QString Date = ui->dateEdit->text();
    QString Time=QTime::currentTime().toString();
    QSqlQueryModel *model = new QSqlQueryModel;
    QString sql_select;
    if( Date == QDate::currentDate().toString("yyyy-MM-dd"))
    {
        sql_select = ER.refreshscheduletoday(buildingname , Date, Time);
    }
    else
    {
        sql_select = ER.refreshscheduleotherdays(buildingname , Date);
    }
    model->setQuery(sql_select);
    ui->tableView_schedule->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("Tytuł filmu"));
    for (int i=1; i< model->columnCount(); i++)
    {
        model->setHeaderData(i, Qt::Horizontal, tr("Godzina"));
    }
    //model->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
    // model->setHeaderData(2, Qt::Horizontal, tr("Data"));
    ui->tableView_schedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_schedule->setColumnHidden(2,true);
}

void ScheduleWindow::on_pushButton_otherday_clicked()
{
    Calender *CalenderForm = new Calender();
    CalenderForm->exec();
    ui->dateEdit->setDate(CalenderForm->Choice_Date);
    ui->lineEdit_date->setText(CalenderForm->Choice_Date.toString("dd.MM.yyyy"));
    delete CalenderForm;

    EmployeeRepository ER;
    QString buildingname =ER.findbuilding(employee->getUsername(), employee->getPassword());
    ui->label_building->setText("Budynek: " + buildingname);
    QString Date = ui->dateEdit->text();
    QString Time=QTime::currentTime().toString();
    QSqlQueryModel *model = new QSqlQueryModel;
    QString sql_select;
    if( Date == QDate::currentDate().toString("yyyy-MM-dd"))
    {
        sql_select = ER.refreshscheduletoday(buildingname , Date, Time);
    }
    else
    {
        sql_select = ER.refreshscheduleotherdays(buildingname , Date);
    }
    model->setQuery(sql_select);
    ui->tableView_schedule->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("Tytuł filmu"));
    for (int i=1; i< model->columnCount(); i++)
    {
        model->setHeaderData(i, Qt::Horizontal, tr("Godzina"));
    }
    //model->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
    // model->setHeaderData(2, Qt::Horizontal, tr("Data"));
    ui->tableView_schedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_schedule->setColumnHidden(2,true);
}

void ScheduleWindow::on_pushButton_client_account_clicked()
{
    ScheduleWindow::close();
    am->ShowSearchclientwindow(employee);
}
void ScheduleWindow::on_pushButton_create_account_clicked()
{
    am->ShowNewAccountForm();
}
void ScheduleWindow::on_pushButton_give_ticket_clicked()
{
    ScheduleWindow::close();
    am->ShowReservation(employee);
}

void ScheduleWindow::on_tableView_schedule_doubleClicked(const QModelIndex &index)
{
    ScheduleWindow::close();
    am->ShowNumberReservedTickets(employee);
}
