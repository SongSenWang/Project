/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QString::fromUtf8("Dialog1"));
        Dialog1->resize(308, 289);
        pushButton = new QPushButton(Dialog1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 230, 101, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Dialog1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 40, 111, 31));
        QFont font1;
        font1.setPointSize(11);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Dialog1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 130, 111, 31));
        pushButton_3->setFont(font1);

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QCoreApplication::translate("Dialog1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog1", "exit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog1", "\344\272\272\345\221\230\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog1", "\347\273\204\347\273\207\347\273\223\346\236\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
