/********************************************************************************
** Form generated from reading UI file 'cardloadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDLOADWINDOW_H
#define UI_CARDLOADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CardLoadWindow
{
public:

    void setupUi(QDialog *CardLoadWindow)
    {
        if (CardLoadWindow->objectName().isEmpty())
            CardLoadWindow->setObjectName(QStringLiteral("CardLoadWindow"));
        CardLoadWindow->resize(400, 300);

        retranslateUi(CardLoadWindow);

        QMetaObject::connectSlotsByName(CardLoadWindow);
    } // setupUi

    void retranslateUi(QDialog *CardLoadWindow)
    {
        CardLoadWindow->setWindowTitle(QApplication::translate("CardLoadWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CardLoadWindow: public Ui_CardLoadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDLOADWINDOW_H
