#ifndef CINEMABUILDINGREPERTOIRSCHEDULE_H
#define CINEMABUILDINGREPERTOIRSCHEDULE_H

#include <QDialog>

#include "calender.h"
#include "mainwindow.h"

#include "employee.h"
#include "building.h"

#include <QTimer>
#include <QDate>
#include <QTableView>

namespace Ui {
class CinemaBuildingRepertoirSchedule;
}

class CinemaBuildingRepertoirSchedule : public QDialog
{
    Q_OBJECT

    Employee *employee;
    Building *building;

    //stała która jest odpowiedzialna za odświeżanie aktualnej daty co 1s
     static const int TIME_REFRESH = 1000;

     QTimer stoper;

     // zmienna określająca datę dla której ma zostać wyświetlony harmonogran repertuaru budynku
     QDate DateSelected;
    
public:
    explicit CinemaBuildingRepertoirSchedule(Employee *e, QWidget *parent = 0);
    ~CinemaBuildingRepertoirSchedule();
    
public slots:

   // void refreshTime();
   // void log_out();

private slots:
    void on_pushButton_give_ticket_clicked();
    void on_pushButton_create_account_clicked();
    void on_pushButton_client_account_clicked();
    void on_pushButton_tomorrow_clicked();
    void on_pushButton_otherday_clicked();
    void on_pushButton_modyfydata_clicked();
    void on_pushButton_logout_clicked();
    void on_tableView_schedule_doubleClicked(const QModelIndex &index);

private:
    Ui::CinemaBuildingRepertoirSchedule *ui;
};

#endif // CINEMABUILDINGREPERTOIRSCHEDULE_H
