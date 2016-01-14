#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>

namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT
    
public:
    explicit Payment(QWidget *parent = 0);
    ~Payment();
    
private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
