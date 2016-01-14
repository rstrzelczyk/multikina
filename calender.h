#ifndef CALENDER_H
#define CALENDER_H

#include <QDialog>
#include <QDate>

//#include "cinemabuildingrepertoirschedule.h"

class CinemaBuildingRepertoirSchedule;

namespace Ui {
class Calender;
}

class Calender : public QDialog
{
    Q_OBJECT
    
public:
    explicit Calender(QWidget *parent = 0);
    ~Calender();

    //zmienna przechowujaca dane o wybranym dniu z kalendarza
    QDate Choice_Date;
    
private slots:

    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::Calender *ui;

friend class CinemaBuildingRepertoirSchedule;

};
#endif // CALENDER_H
