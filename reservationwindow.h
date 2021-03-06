#ifndef RESERVATIONWINDOW_H
#define RESERVATIONWINDOW_H

#include <QMainWindow>
#include "employee.h"
#include "clientrepository.h"
#include "accountmanager.h"
#include "orderinformation.h"

namespace Ui {
class ReservationWindow;
}

class ReservationWindow : public QMainWindow
{
    Q_OBJECT

    Employee *employee;
    
public:
    explicit ReservationWindow(Employee *e, QWidget *parent = 0);
    ~ReservationWindow();
    
private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_refresh_clicked();

    void on_tableView_reservation_doubleClicked(const QModelIndex &index);

private:
    Ui::ReservationWindow *ui;
};

#endif // RESERVATIONWINDOW_H
