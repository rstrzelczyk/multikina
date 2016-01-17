#ifndef SCHEDULEWINDOW_H
#define SCHEDULEWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDate>

#include "accountmanager.h"
#include "employee.h"
#include "calender.h"

namespace Ui {
class ScheduleWindow;
}

class ScheduleWindow : public QMainWindow
{
    Q_OBJECT

    Employee *employee;

    //stała która jest odpowiedzialna za odświeżanie aktualnej daty co 1s
    static const int TIME_REFRESH = 1000;

    QTimer stoper;

    // zmienna określająca datę dla której ma zostać wyświetlony harmonogran repertuaru budynku
    QDate DateSelected;
    
public:
    explicit ScheduleWindow(Employee *e, QWidget *parent = 0);
    ~ScheduleWindow();

    void refreshTime();
    
private slots:

    void on_pushButton_logout_clicked();

    void on_pushButton_modyfydata_clicked();

    void on_pushButton_tomorrow_clicked();

    void on_pushButton_otherday_clicked();

    void on_pushButton_client_account_clicked();

    void on_pushButton_create_account_clicked();

    void on_pushButton_give_ticket_clicked();

private:
    Ui::ScheduleWindow *ui;
};

#endif // SCHEDULEWINDOW_H
