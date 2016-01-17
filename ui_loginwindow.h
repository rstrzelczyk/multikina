/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_menu_2;
    QLabel *label_user;
    QLabel *label_logo;
    QFrame *line_2;
    QGroupBox *groupBox_info;
    QLabel *label_info;
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButtonlog_in;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(523, 432);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_menu_2 = new QGroupBox(centralwidget);
        groupBox_menu_2->setObjectName(QStringLiteral("groupBox_menu_2"));
        groupBox_menu_2->setGeometry(QRect(10, 10, 501, 121));
        label_user = new QLabel(groupBox_menu_2);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(380, 50, 111, 31));
        QFont font;
        font.setPointSize(11);
        label_user->setFont(font);
        label_logo = new QLabel(groupBox_menu_2);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(10, 10, 321, 91));
        line_2 = new QFrame(groupBox_menu_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(322, 0, 31, 121));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox_info = new QGroupBox(centralwidget);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 340, 501, 51));
        label_info = new QLabel(groupBox_info);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setEnabled(true);
        label_info->setGeometry(QRect(180, 10, 151, 31));
        QFont font1;
        font1.setPointSize(10);
        label_info->setFont(font1);
        groupBoxlogin = new QGroupBox(centralwidget);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 140, 503, 192));
        formLayoutWidget = new QWidget(groupBoxlogin);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 40, 341, 111));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(formLayoutWidget);
        label_login->setObjectName(QStringLiteral("label_login"));
        QFont font2;
        font2.setPointSize(12);
        label_login->setFont(font2);

        gridLayout->addWidget(label_login, 0, 0, 1, 1);

        lineEdit_login = new QLineEdit(formLayoutWidget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));

        gridLayout->addWidget(lineEdit_login, 0, 1, 1, 1);

        label_password = new QLabel(formLayoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setFont(font2);

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(formLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        pushButtonlog_in = new QPushButton(formLayoutWidget);
        pushButtonlog_in->setObjectName(QStringLiteral("pushButtonlog_in"));

        gridLayout->addWidget(pushButtonlog_in, 2, 1, 1, 1);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 523, 21));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "MainWindow", 0));
        groupBox_menu_2->setTitle(QString());
        label_user->setText(QApplication::translate("LoginWindow", "Niezalogowany", 0));
        label_logo->setText(QString());
        groupBox_info->setTitle(QString());
        label_info->setText(QString());
        groupBoxlogin->setTitle(QString());
        label_login->setText(QApplication::translate("LoginWindow", "Login: ", 0));
        label_password->setText(QApplication::translate("LoginWindow", "Has\305\202o: ", 0));
        pushButtonlog_in->setText(QApplication::translate("LoginWindow", "Zaloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
