#ifndef RESERVATION_H
#define RESERVATION_H

#include <QDialog>


#include "employee.h"

#include "clientrepository.h"

namespace Ui {
class Reservation;
}

class Reservation : public QDialog
{
    Q_OBJECT

    Employee *employee;
    
public:
    explicit Reservation(Employee *e, QWidget *parent = 0);
    ~Reservation();
    
private slots:
    void on_pushButton_back_clicked();

    void on_tableView_reservation_doubleClicked(const QModelIndex &index);

    void on_pushButton_refresh_clicked();

private:
    Ui::Reservation *ui;
};

#endif // RESERVATION_H
