#ifndef NUMBERRESERVEDTICKETS_H
#define NUMBERRESERVEDTICKETS_H

#include <QDialog>

#include "employee.h"

namespace Ui {
class NumberReservedTickets;
}

class NumberReservedTickets : public QDialog
{
    Q_OBJECT
    
public:
    explicit NumberReservedTickets(QWidget *parent = 0);
    ~NumberReservedTickets();
    
private slots:
    void on_pushButton_main_menu_back_2_clicked();

    void on_pushButton_back_2_clicked();

private:
    Ui::NumberReservedTickets *ui;
};

#endif // NUMBERRESERVEDTICKETS_H
