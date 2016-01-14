#ifndef ORDERVALIDATIONTICKETOFFICE_H
#define ORDERVALIDATIONTICKETOFFICE_H

#include <QDialog>

namespace Ui {
class OrderValidationTicketOffice;
}

class OrderValidationTicketOffice : public QDialog
{
    Q_OBJECT
    
public:
    explicit OrderValidationTicketOffice(QWidget *parent = 0);
    ~OrderValidationTicketOffice();
    
private:
    Ui::OrderValidationTicketOffice *ui;
};

#endif // ORDERVALIDATIONTICKETOFFICE_H
