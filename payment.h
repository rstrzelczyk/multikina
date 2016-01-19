#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>
#include "accountmanager.h"

namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT
    
public:
    explicit Payment(int totalprice, QWidget *parent = 0);
    ~Payment();
    
private slots:
    void on_pushButton_finish_clicked();

    void on_lineEdit_cash_editingFinished();

    void on_lineEdit_cash_textChanged(const QString &arg1);

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
