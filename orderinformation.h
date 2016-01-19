#ifndef ORDERINFORMATION_H
#define ORDERINFORMATION_H

#include <QDialog>
#include "ordervalidationticketoffice.h"
#include "accountmanager.h"
#include "reservationwindow.h"
#include "employee.h"
#include "payment.h"

namespace Ui {
class OrderInformation;
}

class OrderInformation : public QDialog
{
    Q_OBJECT
    Employee *employee;
    
public:
    explicit OrderInformation(Employee *e,int totalnumber, int totalprice, QWidget *parent = 0);
    ~OrderInformation();
    
private slots:
    void on_pushButton_cash_clicked();

    void on_pushButton_card_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::OrderInformation *ui;
};

#endif // ORDERINFORMATION_H
