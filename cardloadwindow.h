#ifndef CARDLOADWINDOW_H
#define CARDLOADWINDOW_H

#include <QDialog>

namespace Ui {
class CardLoadWindow;
}

class CardLoadWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit CardLoadWindow(QWidget *parent = 0);
    ~CardLoadWindow();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::CardLoadWindow *ui;
};

#endif // CARDLOADWINDOW_H
