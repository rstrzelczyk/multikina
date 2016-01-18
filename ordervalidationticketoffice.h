#ifndef ORDERVALIDATIONTICKETOFFICE_H
#define ORDERVALIDATIONTICKETOFFICE_H

#include <QDialog>
#include "accountmanager.h"

namespace Ui {
class OrderValidationTicketOffice;
}

class OrderValidationTicketOffice : public QDialog
{
    Q_OBJECT
    
public:
    explicit OrderValidationTicketOffice(QWidget *parent = 0);
    ~OrderValidationTicketOffice();
    
private slots:
    void on_pushButton_finish_2_clicked();

private:
    Ui::OrderValidationTicketOffice *ui;
};

#endif // ORDERVALIDATIONTICKETOFFICE_H
