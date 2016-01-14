/********************************************************************************
** Form generated from reading UI file 'cardscanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDSCANWINDOW_H
#define UI_CARDSCANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_CardScanWindow
{
public:
    QProgressBar *progressBar;

    void setupUi(QDialog *CardScanWindow)
    {
        if (CardScanWindow->objectName().isEmpty())
            CardScanWindow->setObjectName(QStringLiteral("CardScanWindow"));
        CardScanWindow->resize(400, 300);
        progressBar = new QProgressBar(CardScanWindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(130, 110, 118, 23));
        progressBar->setValue(24);

        retranslateUi(CardScanWindow);

        QMetaObject::connectSlotsByName(CardScanWindow);
    } // setupUi

    void retranslateUi(QDialog *CardScanWindow)
    {
        CardScanWindow->setWindowTitle(QApplication::translate("CardScanWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CardScanWindow: public Ui_CardScanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDSCANWINDOW_H
