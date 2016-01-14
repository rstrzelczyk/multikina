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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchClientWindow
{
public:
    QGroupBox *groupBox_menu;
    QLabel *label_logo;
    QFrame *line;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_2;
    QPushButton *pushButton_logout;
    QGroupBox *groupBoxlogin;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_search;
    QLineEdit *lineEdit_search;
    QTableView *tableView_search_client;

    void setupUi(QDialog *SearchClientWindow)
    {
        if (SearchClientWindow->objectName().isEmpty())
            SearchClientWindow->setObjectName(QStringLiteral("SearchClientWindow"));
        SearchClientWindow->resize(689, 711);
        groupBox_menu = new QGroupBox(SearchClientWindow);
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
        layoutWidget = new QWidget(groupBox_menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 30, 261, 31));
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

        groupBoxlogin = new QGroupBox(SearchClientWindow);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 671, 571));
        layoutWidget1 = new QWidget(groupBoxlogin);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 261, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_search = new QLabel(layoutWidget1);
        label_search->setObjectName(QStringLiteral("label_search"));
        QFont font1;
        font1.setPointSize(10);
        label_search->setFont(font1);

        horizontalLayout_2->addWidget(label_search);

        lineEdit_search = new QLineEdit(layoutWidget1);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));

        horizontalLayout_2->addWidget(lineEdit_search);

        tableView_search_client = new QTableView(groupBoxlogin);
        tableView_search_client->setObjectName(QStringLiteral("tableView_search_client"));
        tableView_search_client->setGeometry(QRect(30, 80, 621, 471));

        retranslateUi(SearchClientWindow);

        QMetaObject::connectSlotsByName(SearchClientWindow);
    } // setupUi

    void retranslateUi(QDialog *SearchClientWindow)
    {
        SearchClientWindow->setWindowTitle(QApplication::translate("SearchClientWindow", "Dialog", 0));
        groupBox_menu->setTitle(QString());
        label_logo->setText(QString());
        pushButton_back->setText(QString());
        label_user_2->setText(QString());
        pushButton_logout->setText(QApplication::translate("SearchClientWindow", "Wyloguj", 0));
        groupBoxlogin->setTitle(QString());
        label_search->setText(QApplication::translate("SearchClientWindow", "Wyszukaj klienta: ", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchClientWindow: public Ui_SearchClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCLIENTWINDOW_H
