/********************************************************************************
** Form generated from reading UI file 'reservationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONWINDOW_H
#define UI_RESERVATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservationWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxlogin;
    QPushButton *pushButton_refresh;
    QTableView *tableView_reservation;
    QGroupBox *groupBox_menu;
    QLabel *label_logo;
    QFrame *line;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_2;
    QPushButton *pushButton_logout;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReservationWindow)
    {
        if (ReservationWindow->objectName().isEmpty())
            ReservationWindow->setObjectName(QStringLiteral("ReservationWindow"));
        ReservationWindow->resize(751, 733);
        centralwidget = new QWidget(ReservationWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBoxlogin = new QGroupBox(centralwidget);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 731, 561));
        pushButton_refresh = new QPushButton(groupBoxlogin);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(10, 520, 101, 31));
        tableView_reservation = new QTableView(groupBoxlogin);
        tableView_reservation->setObjectName(QStringLiteral("tableView_reservation"));
        tableView_reservation->setGeometry(QRect(10, 10, 711, 491));
        groupBox_menu = new QGroupBox(centralwidget);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 731, 111));
        label_logo = new QLabel(groupBox_menu);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(10, 10, 321, 91));
        line = new QFrame(groupBox_menu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(322, 0, 31, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_back = new QPushButton(groupBox_menu);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(690, 40, 27, 27));
        layoutWidget = new QWidget(groupBox_menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 40, 301, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_user_2 = new QLabel(layoutWidget);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        QFont font;
        font.setPointSize(11);
        label_user_2->setFont(font);

        horizontalLayout->addWidget(label_user_2);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        lineEdit = new QLineEdit(groupBox_menu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(380, 80, 113, 20));
        ReservationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReservationWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 751, 21));
        ReservationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ReservationWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ReservationWindow->setStatusBar(statusbar);

        retranslateUi(ReservationWindow);

        QMetaObject::connectSlotsByName(ReservationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReservationWindow)
    {
        ReservationWindow->setWindowTitle(QApplication::translate("ReservationWindow", "MainWindow", 0));
        groupBoxlogin->setTitle(QString());
        pushButton_refresh->setText(QApplication::translate("ReservationWindow", "Od\305\233wie\305\274", 0));
        groupBox_menu->setTitle(QString());
        label_logo->setText(QString());
        pushButton_back->setText(QString());
        label_user_2->setText(QString());
        pushButton_logout->setText(QApplication::translate("ReservationWindow", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class ReservationWindow: public Ui_ReservationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONWINDOW_H
