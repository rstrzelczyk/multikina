#ifndef CARDSCANWINDOW_H
#define CARDSCANWINDOW_H

#include <QDialog>

namespace Ui {
class CardScanWindow;
}

class CardScanWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit CardScanWindow(QWidget *parent = 0);
    ~CardScanWindow();
    
private:
    Ui::CardScanWindow *ui;
};

#endif // CARDSCANWINDOW_H
