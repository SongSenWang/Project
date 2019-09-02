/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(346, 300);
        lineEdit = new QLineEdit(DialogLogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 113, 20));
        label = new QLabel(DialogLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        label->setFont(font);
        pushButton = new QPushButton(DialogLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 194, 91, 31));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 61, 20));
        label_2->setFont(font);
        lineEdit_2 = new QLineEdit(DialogLogin);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 130, 113, 20));
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 19, 311, 31));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QCoreApplication::translate("DialogLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogLogin", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("DialogLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DialogLogin", "\346\254\242\350\277\216\345\205\211\344\270\264\345\220\214\346\265\216\346\234\272\346\236\204\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
