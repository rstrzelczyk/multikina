/********************************************************************************
** Form generated from reading UI file 'calender.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDER_H
#define UI_CALENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Calender
{
public:
    QGroupBox *groupBox_menu_3;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Calender)
    {
        if (Calender->objectName().isEmpty())
            Calender->setObjectName(QStringLiteral("Calender"));
        Calender->resize(351, 273);
        groupBox_menu_3 = new QGroupBox(Calender);
        groupBox_menu_3->setObjectName(QStringLiteral("groupBox_menu_3"));
        groupBox_menu_3->setGeometry(QRect(10, 10, 331, 251));
        calendarWidget = new QCalendarWidget(groupBox_menu_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 10, 291, 221));
        calendarWidget->raise();

        retranslateUi(Calender);

        QMetaObject::connectSlotsByName(Calender);
    } // setupUi

    void retranslateUi(QDialog *Calender)
    {
        Calender->setWindowTitle(QApplication::translate("Calender", "Dialog", 0));
        groupBox_menu_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Calender: public Ui_Calender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDER_H
