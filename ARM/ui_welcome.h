/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(888, 501);
        label = new QLabel(Welcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 799, 40));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(Welcome);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 160, 471, 71));
        pushButton->setFont(font);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "\320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265", nullptr));
        label->setText(QApplication::translate("Welcome", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \321\200\320\260\320\261\320\276\321\207\320\265\320\265 \320\274\320\265\321\201\321\202\320\276 \321\204\320\270\321\202\320\275\320\265\321\201-\321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        pushButton->setText(QApplication::translate("Welcome", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\220\320\240\320\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
