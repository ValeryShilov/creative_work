/********************************************************************************
** Form generated from reading UI file 'calculateearn.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATEEARN_H
#define UI_CALCULATEEARN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalculateEarn
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *cena;
    QLineEdit *Earn;
    QPushButton *calculate;
    QLabel *label_2;

    void setupUi(QDialog *CalculateEarn)
    {
        if (CalculateEarn->objectName().isEmpty())
            CalculateEarn->setObjectName(QString::fromUtf8("CalculateEarn"));
        CalculateEarn->resize(433, 320);
        groupBox = new QGroupBox(CalculateEarn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 381, 221));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 171, 21));
        cena = new QLineEdit(groupBox);
        cena->setObjectName(QString::fromUtf8("cena"));
        cena->setGeometry(QRect(180, 40, 113, 24));
        Earn = new QLineEdit(groupBox);
        Earn->setObjectName(QString::fromUtf8("Earn"));
        Earn->setGeometry(QRect(50, 100, 261, 61));
        QFont font1;
        font1.setPointSize(18);
        Earn->setFont(font1);
        calculate = new QPushButton(groupBox);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(50, 170, 261, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 40, 61, 21));

        retranslateUi(CalculateEarn);

        QMetaObject::connectSlotsByName(CalculateEarn);
    } // setupUi

    void retranslateUi(QDialog *CalculateEarn)
    {
        CalculateEarn->setWindowTitle(QApplication::translate("CalculateEarn", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\267\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\260", nullptr));
        groupBox->setTitle(QApplication::translate("CalculateEarn", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\267\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\267\320\260 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        label->setText(QApplication::translate("CalculateEarn", "\320\246\320\265\320\275\320\260 \320\276\320\264\320\275\320\276\320\263\320\276 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        calculate->setText(QApplication::translate("CalculateEarn", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("CalculateEarn", "\321\200\321\203\320\261\320\273\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculateEarn: public Ui_CalculateEarn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEEARN_H
