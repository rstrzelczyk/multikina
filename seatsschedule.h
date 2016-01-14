#ifndef SEATSSCHEDULE_H
#define SEATSSCHEDULE_H

#include <QDialog>
#include <orderinformation.h>

namespace Ui {
class SeatsSchedule;
}

class SeatsSchedule : public QDialog
{
    Q_OBJECT
    
public:
    explicit SeatsSchedule(QWidget *parent = 0);
    ~SeatsSchedule();
    
private slots:
    void on_pushButton_next_clicked();

    void on_pushButton_back_2_clicked();

private:
    Ui::SeatsSchedule *ui;
};

#endif // SEATSSCHEDULE_H
