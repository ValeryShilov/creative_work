/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *openBase;
    QPushButton *addClient;
    QPushButton *saveSchedule;
    QPushButton *calcuate_money;
    QPushButton *clearSchedule;
    QPushButton *deleteClient;
    QPushButton *pushButton;
    QPushButton *client_in_schedule;
    QLabel *nameSh;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1044, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 420, 981, 59));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openBase = new QPushButton(gridLayoutWidget);
        openBase->setObjectName(QString::fromUtf8("openBase"));

        gridLayout->addWidget(openBase, 0, 1, 1, 1);

        addClient = new QPushButton(gridLayoutWidget);
        addClient->setObjectName(QString::fromUtf8("addClient"));

        gridLayout->addWidget(addClient, 0, 0, 1, 1);

        saveSchedule = new QPushButton(gridLayoutWidget);
        saveSchedule->setObjectName(QString::fromUtf8("saveSchedule"));

        gridLayout->addWidget(saveSchedule, 0, 2, 1, 1);

        calcuate_money = new QPushButton(gridLayoutWidget);
        calcuate_money->setObjectName(QString::fromUtf8("calcuate_money"));

        gridLayout->addWidget(calcuate_money, 0, 4, 1, 1);

        clearSchedule = new QPushButton(gridLayoutWidget);
        clearSchedule->setObjectName(QString::fromUtf8("clearSchedule"));

        gridLayout->addWidget(clearSchedule, 0, 3, 1, 1);

        deleteClient = new QPushButton(gridLayoutWidget);
        deleteClient->setObjectName(QString::fromUtf8("deleteClient"));

        gridLayout->addWidget(deleteClient, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        client_in_schedule = new QPushButton(gridLayoutWidget);
        client_in_schedule->setObjectName(QString::fromUtf8("client_in_schedule"));

        gridLayout->addWidget(client_in_schedule, 1, 2, 1, 1);

        nameSh = new QLabel(centralwidget);
        nameSh->setObjectName(QString::fromUtf8("nameSh"));
        nameSh->setGeometry(QRect(410, 0, 221, 41));
        QFont font;
        font.setPointSize(24);
        nameSh->setFont(font);
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 981, 361));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1044, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \321\200\320\260\320\261\320\276\321\207\320\265\320\265 \320\274\320\265\321\201\321\202\320\276 \321\204\320\270\321\202\320\275\320\265\321\201-\321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        openBase->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\276\320\261\321\211\321\203\321\216 \320\261\320\260\320\267\321\203 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        addClient->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        saveSchedule->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        calcuate_money->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\267\320\260\321\200\320\260\320\261\320\276\321\202\320\276\320\272", nullptr));
        clearSchedule->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        deleteClient->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        client_in_schedule->setText(QApplication::translate("MainWindow", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\272\320\273\320\270\320\265\320\275\321\202\320\260 \320\262 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
#ifndef QT_NO_WHATSTHIS
        nameSh->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265</span></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        nameSh->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
