/********************************************************************************
** Form generated from reading UI file 'searchclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCLIENTWINDOW_H
#define UI_SEARCHCLIENTWINDOW_H

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

class Ui_SearchClientWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxlogin;
    QTableView *tableView_search_client;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_searchemail;
    QLineEdit *lineEdit_searchname;
    QLineEdit *lineEdit_searchsurname;
    QGroupBox *groupBox_menu;
    QLabel *label_logo;
    QFrame *line;
    QPushButton *pushButton_back;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_2;
    QPushButton *pushButton_logout;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchClientWindow)
    {
        if (SearchClientWindow->objectName().isEmpty())
            SearchClientWindow->setObjectName(QStringLiteral("SearchClientWindow"));
        SearchClientWindow->resize(691, 744);
        centralwidget = new QWidget(SearchClientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBoxlogin = new QGroupBox(centralwidget);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 671, 571));
        tableView_search_client = new QTableView(groupBoxlogin);
        tableView_search_client->setObjectName(QStringLiteral("tableView_search_client"));
        tableView_search_client->setGeometry(QRect(30, 50, 621, 501));
        layoutWidget = new QWidget(groupBoxlogin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 621, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_searchemail = new QLineEdit(layoutWidget);
        lineEdit_searchemail->setObjectName(QStringLiteral("lineEdit_searchemail"));

        horizontalLayout_2->addWidget(lineEdit_searchemail);

        lineEdit_searchname = new QLineEdit(layoutWidget);
        lineEdit_searchname->setObjectName(QStringLiteral("lineEdit_searchname"));
        lineEdit_searchname->setMinimumSize(QSize(0, 20));

        horizontalLayout_2->addWidget(lineEdit_searchname);

        lineEdit_searchsurname = new QLineEdit(layoutWidget);
        lineEdit_searchsurname->setObjectName(QStringLiteral("lineEdit_searchsurname"));
        lineEdit_searchsurname->setMinimumSize(QSize(0, 20));

        horizontalLayout_2->addWidget(lineEdit_searchsurname);

        lineEdit_searchname->raise();
        lineEdit_searchsurname->raise();
        lineEdit_searchemail->raise();
        groupBox_menu = new QGroupBox(centralwidget);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 671, 111));
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
        pushButton_back->setGeometry(QRect(620, 32, 27, 27));
        layoutWidget_2 = new QWidget(groupBox_menu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(350, 30, 261, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_user_2 = new QLabel(layoutWidget_2);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        QFont font;
        font.setPointSize(11);
        label_user_2->setFont(font);

        horizontalLayout->addWidget(label_user_2);

        pushButton_logout = new QPushButton(layoutWidget_2);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        lineEdit = new QLineEdit(groupBox_menu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(400, 80, 113, 20));
        SearchClientWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchClientWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 691, 21));
        SearchClientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchClientWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchClientWindow->setStatusBar(statusbar);

        retranslateUi(SearchClientWindow);

        QMetaObject::connectSlotsByName(SearchClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchClientWindow)
    {
        SearchClientWindow->setWindowTitle(QApplication::translate("SearchClientWindow", "MainWindow", 0));
        groupBoxlogin->setTitle(QString());
        groupBox_menu->setTitle(QString());
        label_logo->setText(QString());
        pushButton_back->setText(QString());
        label_user_2->setText(QString());
        pushButton_logout->setText(QApplication::translate("SearchClientWindow", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchClientWindow: public Ui_SearchClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCLIENTWINDOW_H
