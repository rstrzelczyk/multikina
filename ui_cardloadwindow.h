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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CardLoadWindow
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *CardLoadWindow)
    {
        if (CardLoadWindow->objectName().isEmpty())
            CardLoadWindow->setObjectName(QStringLiteral("CardLoadWindow"));
        CardLoadWindow->resize(410, 234);
        lineEdit = new QLineEdit(CardLoadWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 120, 261, 31));
        pushButton = new QPushButton(CardLoadWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 170, 111, 31));
        label = new QLabel(CardLoadWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 50, 181, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(CardLoadWindow);

        QMetaObject::connectSlotsByName(CardLoadWindow);
    } // setupUi

    void retranslateUi(QDialog *CardLoadWindow)
    {
        CardLoadWindow->setWindowTitle(QApplication::translate("CardLoadWindow", "Dialog", 0));
        pushButton->setText(QApplication::translate("CardLoadWindow", "OK", 0));
        label->setText(QApplication::translate("CardLoadWindow", "Wczytaj numer karty:", 0));
    } // retranslateUi

};

namespace Ui {
    class CardLoadWindow: public Ui_CardLoadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDLOADWINDOW_H
