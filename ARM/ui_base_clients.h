/********************************************************************************
** Form generated from reading UI file 'base_clients.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_CLIENTS_H
#define UI_BASE_CLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_base_clients
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableClients;
    QGridLayout *gridLayout;
    QPushButton *addClient;
    QPushButton *deleteClient;

    void setupUi(QWidget *base_clients)
    {
        if (base_clients->objectName().isEmpty())
            base_clients->setObjectName(QString::fromUtf8("base_clients"));
        base_clients->resize(859, 493);
        label = new QLabel(base_clients);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 0, 217, 40));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        widget = new QWidget(base_clients);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 40, 851, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableClients = new QTableView(widget);
        tableClients->setObjectName(QString::fromUtf8("tableClients"));
        tableClients->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableClients->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(tableClients);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addClient = new QPushButton(widget);
        addClient->setObjectName(QString::fromUtf8("addClient"));

        gridLayout->addWidget(addClient, 0, 0, 1, 1);

        deleteClient = new QPushButton(widget);
        deleteClient->setObjectName(QString::fromUtf8("deleteClient"));

        gridLayout->addWidget(deleteClient, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(base_clients);

        QMetaObject::connectSlotsByName(base_clients);
    } // setupUi

    void retranslateUi(QWidget *base_clients)
    {
        base_clients->setWindowTitle(QApplication::translate("base_clients", "\320\221\320\260\320\267\320\260 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        label->setText(QApplication::translate("base_clients", "\320\221\320\260\320\267\320\260 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        addClient->setText(QApplication::translate("base_clients", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        deleteClient->setText(QApplication::translate("base_clients", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class base_clients: public Ui_base_clients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE_CLIENTS_H
