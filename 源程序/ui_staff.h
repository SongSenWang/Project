/********************************************************************************
** Form generated from reading UI file 'staff.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_staff
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit3;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QDialog *staff)
    {
        if (staff->objectName().isEmpty())
            staff->setObjectName(QString::fromUtf8("staff"));
        staff->resize(560, 420);
        pushButton = new QPushButton(staff);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 370, 91, 31));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(staff);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 20, 131, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(staff);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 260, 91, 31));
        pushButton_3->setFont(font);
        lineEdit3 = new QLineEdit(staff);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
        lineEdit3->setGeometry(QRect(320, 260, 113, 20));
        label = new QLabel(staff);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 260, 61, 16));
        label->setFont(font);
        tableView = new QTableView(staff);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(235, 10, 301, 241));
        pushButton_4 = new QPushButton(staff);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 70, 131, 31));
        QFont font1;
        font1.setPointSize(10);
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(staff);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 120, 131, 31));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(staff);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 170, 131, 31));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(staff);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 220, 131, 31));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(staff);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 270, 131, 31));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(staff);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 320, 131, 31));
        pushButton_9->setFont(font);

        retranslateUi(staff);

        QMetaObject::connectSlotsByName(staff);
    } // setupUi

    void retranslateUi(QDialog *staff)
    {
        staff->setWindowTitle(QCoreApplication::translate("staff", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("staff", "exit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("staff", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_3->setText(QCoreApplication::translate("staff", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("staff", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("staff", "\346\230\276\347\244\272\345\205\250\351\203\250\344\272\272\345\221\230", nullptr));
        pushButton_5->setText(QCoreApplication::translate("staff", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButton_6->setText(QCoreApplication::translate("staff", "\346\222\244\351\224\200\346\234\254\350\241\214\344\277\256\346\224\271", nullptr));
        pushButton_7->setText(QCoreApplication::translate("staff", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        pushButton_8->setText(QCoreApplication::translate("staff", "\346\267\273\345\212\240\344\272\272\345\221\230", nullptr));
        pushButton_9->setText(QCoreApplication::translate("staff", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class staff: public Ui_staff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
