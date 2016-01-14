#include "cinemabuildingrepertoirschedule.h"
#include "ui_cinemabuildingrepertoirschedule.h"

CinemaBuildingRepertoirSchedule::CinemaBuildingRepertoirSchedule(Employee *e, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CinemaBuildingRepertoirSchedule)
{
    ui->setupUi(this);

    employee=e;

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);

    DateSelected = QDate::currentDate();

    connect(&stoper, SIGNAL(timeout()), this, SLOT(refreshTime()));
    refreshTime();

    ui->dateEdit->date().toString("dd.MM.yyyy");
    ui->dateEdit->setDate(DateSelected);

    ui->label_user->setText("Kasjer: "+employee->getUsername());

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

CinemaBuildingRepertoirSchedule::~CinemaBuildingRepertoirSchedule()
{
    delete ui;
}

void CinemaBuildingRepertoirSchedule::log_out()
{
    //CinemaBuildingRepertoirSchedule::close();
}

void CinemaBuildingRepertoirSchedule::refreshTime()
{
    stoper.start(TIME_REFRESH);
}

void CinemaBuildingRepertoirSchedule::on_pushButton_give_ticket_clicked()
{
    AccountManager am;
    am.ShowReservation(employee);
}

void CinemaBuildingRepertoirSchedule::on_pushButton_create_account_clicked()
{
    EmployeeRepository ER;
    QString buildingname =ER.findbuilding(employee->getUsername(), employee->getPassword());
    AccountManager am;
    am.ShowNewAccountForm(employee, buildingname);
}

void CinemaBuildingRepertoirSchedule::on_pushButton_client_account_clicked()
{
    AccountManager am;
    am.ShowSearchclientwindow(employee);
}

void CinemaBuildingRepertoirSchedule::on_pushButton_tomorrow_clicked()
{
    DateSelected = QDate::currentDate();
    if(DateSelected.dayOfYear() - QDate::currentDate().dayOfYear() ==0)
    {
        DateSelected = DateSelected.addDays(1);
        ui->dateEdit->setDate(DateSelected);
    }
    else
    {
        return;
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

void CinemaBuildingRepertoirSchedule::on_pushButton_otherday_clicked()
{
    Calender *CalenderForm = new Calender();
    CalenderForm->exec();
    ui->dateEdit->setDate(CalenderForm->Choice_Date);
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

void CinemaBuildingRepertoirSchedule::on_pushButton_modyfydata_clicked()
{
    AccountManager am;
    //CinemaBuildingRepertoirSchedule::close();
    am.ShowEmployeeDataForm(employee);
}

void CinemaBuildingRepertoirSchedule::on_pushButton_logout_clicked()
{
    log_out();
    CinemaBuildingRepertoirSchedule::close();
}

void CinemaBuildingRepertoirSchedule::on_tableView_schedule_doubleClicked(const QModelIndex &index)
{
    if(index.column()!=0)
    {
        AccountManager am;
        am.ShowNumberReservedTickets();
    }
    else
    {
        return;
    }
}
