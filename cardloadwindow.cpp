#include "cardloadwindow.h"
#include "ui_cardloadwindow.h"

CardLoadWindow::CardLoadWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardLoadWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Multikina"));
}

CardLoadWindow::~CardLoadWindow()
{
    delete ui;
}

void CardLoadWindow::on_pushButton_clicked()
{
    CardLoadWindow::close();
}
