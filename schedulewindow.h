#ifndef SCHEDULEWINDOW_H
#define SCHEDULEWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDate>

#include "accountmanager.h"
#include "employee.h"
#include "calender.h"
<<<<<<< HEAD

=======
class AccountManager;
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
namespace Ui {
class ScheduleWindow;
}

class ScheduleWindow : public QMainWindow
{
    Q_OBJECT

    Employee *employee;
<<<<<<< HEAD

=======
    AccountManager* am;
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    //stała która jest odpowiedzialna za odświeżanie aktualnej daty co 1s
    static const int TIME_REFRESH = 1000;

    QTimer stoper;

    // zmienna określająca datę dla której ma zostać wyświetlony harmonogran repertuaru budynku
    QDate DateSelected;
    
public:
<<<<<<< HEAD
    explicit ScheduleWindow(Employee *e, QWidget *parent = 0);
=======
    explicit ScheduleWindow(AccountManager* am,Employee *e, QWidget *parent = 0);
    ScheduleWindow(Employee *e, QWidget *parent = 0);
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    ~ScheduleWindow();

    void refreshTime();
    
private slots:

    void on_pushButton_logout_clicked();

    void on_pushButton_modyfydata_clicked();

    void on_pushButton_tomorrow_clicked();

    void on_pushButton_otherday_clicked();

    void on_pushButton_client_account_clicked();

<<<<<<< HEAD
=======
    void on_pushButton_create_account_clicked();

    void on_pushButton_give_ticket_clicked();

    void on_tableView_schedule_doubleClicked(const QModelIndex &index);

>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
private:
    Ui::ScheduleWindow *ui;
};

#endif // SCHEDULEWINDOW_H
