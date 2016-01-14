#include "cardscanwindow.h"
#include "ui_cardscanwindow.h"

CardScanWindow::CardScanWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardScanWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Multikina"));
}

CardScanWindow::~CardScanWindow()
{
    delete ui;
}
