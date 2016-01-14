#ifndef ORDERINFORMATION_H
#define ORDERINFORMATION_H

#include <QDialog>

namespace Ui {
class OrderInformation;
}

class OrderInformation : public QDialog
{
    Q_OBJECT
    
public:
    explicit OrderInformation(QWidget *parent = 0);
    ~OrderInformation();
    
private:
    Ui::OrderInformation *ui;
};

#endif // ORDERINFORMATION_H
