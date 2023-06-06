/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *fio_label;
    QLineEdit *FIO;
    QLabel *label_2;
    QLineEdit *age;
    QLabel *label_5;
    QLineEdit *phoneNumber;
    QLabel *label;
    QLineEdit *height;
    QLabel *label_3;
    QLineEdit *weight;
    QLabel *label_4;
    QLineEdit *goal;
    QPushButton *addClient;
    QPushButton *random;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QString::fromUtf8("AddClient"));
        AddClient->resize(622, 416);
        groupBox = new QGroupBox(AddClient);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(90, 50, 471, 321));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 451, 287));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fio_label = new QLabel(layoutWidget);
        fio_label->setObjectName(QString::fromUtf8("fio_label"));

        gridLayout->addWidget(fio_label, 0, 0, 1, 1);

        FIO = new QLineEdit(layoutWidget);
        FIO->setObjectName(QString::fromUtf8("FIO"));

        gridLayout->addWidget(FIO, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        age = new QLineEdit(layoutWidget);
        age->setObjectName(QString::fromUtf8("age"));

        gridLayout->addWidget(age, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        phoneNumber = new QLineEdit(layoutWidget);
        phoneNumber->setObjectName(QString::fromUtf8("phoneNumber"));

        gridLayout->addWidget(phoneNumber, 2, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        height = new QLineEdit(layoutWidget);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 3, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        weight = new QLineEdit(layoutWidget);
        weight->setObjectName(QString::fromUtf8("weight"));

        gridLayout->addWidget(weight, 4, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        goal = new QLineEdit(layoutWidget);
        goal->setObjectName(QString::fromUtf8("goal"));

        gridLayout->addWidget(goal, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        addClient = new QPushButton(layoutWidget);
        addClient->setObjectName(QString::fromUtf8("addClient"));

        verticalLayout->addWidget(addClient);

        random = new QPushButton(layoutWidget);
        random->setObjectName(QString::fromUtf8("random"));

        verticalLayout->addWidget(random);


        retranslateUi(AddClient);

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        groupBox->setTitle(QApplication::translate("AddClient", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        fio_label->setText(QApplication::translate("AddClient", "\320\244\320\230\320\236", nullptr));
        label_2->setText(QApplication::translate("AddClient", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_5->setText(QApplication::translate("AddClient", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label->setText(QApplication::translate("AddClient", "\320\240\320\276\321\201\321\202", nullptr));
        label_3->setText(QApplication::translate("AddClient", "\320\222\320\265\321\201", nullptr));
        label_4->setText(QApplication::translate("AddClient", "\320\246\320\265\320\273\321\214", nullptr));
        addClient->setText(QApplication::translate("AddClient", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        random->setText(QApplication::translate("AddClient", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\320\276\320\263\320\276 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
