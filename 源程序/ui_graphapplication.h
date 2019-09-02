/********************************************************************************
** Form generated from reading UI file 'graphapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHAPPLICATION_H
#define UI_GRAPHAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphApplication
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *GraphApplication)
    {
        if (GraphApplication->objectName().isEmpty())
            GraphApplication->setObjectName(QString::fromUtf8("GraphApplication"));
        GraphApplication->resize(310, 286);
        label = new QLabel(GraphApplication);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 221, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font.setPointSize(16);
        label->setFont(font);
        pushButton = new QPushButton(GraphApplication);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setCheckable(false);
        pushButton_2 = new QPushButton(GraphApplication);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 120, 101, 31));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(GraphApplication);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 170, 101, 31));
        QFont font2;
        font2.setPointSize(11);
        pushButton_3->setFont(font2);

        retranslateUi(GraphApplication);

        QMetaObject::connectSlotsByName(GraphApplication);
    } // setupUi

    void retranslateUi(QWidget *GraphApplication)
    {
        GraphApplication->setWindowTitle(QCoreApplication::translate("GraphApplication", "GraphApplication", nullptr));
        label->setText(QCoreApplication::translate("GraphApplication", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#0000ff;\">\346\225\260\346\215\256\347\273\223\346\236\204\350\257\276\347\250\213\350\256\276\350\256\241</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("GraphApplication", "\347\256\227\346\263\225\345\256\236\347\216\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GraphApplication", "\347\273\274\345\220\210\345\272\224\347\224\250", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GraphApplication", "\345\277\253\351\200\237\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphApplication: public Ui_GraphApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHAPPLICATION_H
