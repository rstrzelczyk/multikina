#ifndef NUMBERRESERVEDTICKETS_H
#define NUMBERRESERVEDTICKETS_H

#include <QDialog>

#include "employee.h"
#include "orderinformation.h"

namespace Ui {
class NumberReservedTickets;
}

class NumberReservedTickets : public QDialog
{
    Q_OBJECT
    Employee *employee;
    
public:
    explicit NumberReservedTickets(Employee *e, QWidget *parent = 0);
    ~NumberReservedTickets();

    void selectTickets();
    
private slots:
    void on_pushButton_main_menu_back_2_clicked();

    void on_pushButton_back_2_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_plus_normal_clicked();

    void on_pushButton_minus_normal_clicked();

    void on_pushButton_plus_student_clicked();

    void on_pushButton_minus_student_clicked();

    void on_pushButton_plus_senio_clicked();

    void on_pushButton_minus_senior_clicked();

private:
    Ui::NumberReservedTickets *ui;
};

#endif // NUMBERRESERVEDTICKETS_H
