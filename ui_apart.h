/********************************************************************************
** Form generated from reading UI file 'apart.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APART_H
#define UI_APART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_apart
{
public:
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *apart)
    {
        if (apart->objectName().isEmpty())
            apart->setObjectName(QString::fromUtf8("apart"));
        apart->resize(750, 298);
        pushButton = new QPushButton(apart);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 260, 91, 31));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        treeWidget = new QTreeWidget(apart);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 241, 211));
        pushButton_2 = new QPushButton(apart);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 10, 91, 31));
        pushButton_2->setFont(font);
        lineEdit = new QLineEdit(apart);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(570, 50, 131, 20));
        label = new QLabel(apart);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 50, 111, 21));
        QFont font1;
        font1.setPointSize(9);
        label->setFont(font1);
        pushButton_3 = new QPushButton(apart);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 80, 91, 31));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(apart);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 150, 91, 31));
        pushButton_4->setFont(font);
        lineEdit_2 = new QLineEdit(apart);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(570, 90, 131, 20));
        label_2 = new QLabel(apart);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 90, 121, 21));
        lineEdit_3 = new QLineEdit(apart);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(570, 130, 131, 20));
        label_3 = new QLabel(apart);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 130, 111, 20));
        label_4 = new QLabel(apart);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 170, 111, 20));
        lineEdit_4 = new QLineEdit(apart);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(570, 170, 131, 20));
        label_5 = new QLabel(apart);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 210, 111, 21));
        label_6 = new QLabel(apart);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(450, 250, 111, 20));
        lineEdit_5 = new QLineEdit(apart);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(570, 210, 131, 20));
        lineEdit_6 = new QLineEdit(apart);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(570, 250, 131, 20));

        retranslateUi(apart);

        QMetaObject::connectSlotsByName(apart);
    } // setupUi

    void retranslateUi(QDialog *apart)
    {
        apart->setWindowTitle(QCoreApplication::translate("apart", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("apart", "Exit", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("apart", "\347\273\204\347\273\207\346\234\272\346\236\204", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("apart", "\345\255\246\351\231\242", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("apart", "\345\205\232\347\276\244\347\273\204\347\273\207", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("apart", "\350\241\214\346\224\277\346\234\272\346\236\204", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("apart", "\347\233\264\345\261\236\345\215\225\344\275\215", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("apart", "\351\231\204\345\261\236\345\215\225\344\275\215", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QCoreApplication::translate("apart", "\346\267\273\345\212\240\351\203\250\351\227\250", nullptr));
        label->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("apart", "\345\210\240\351\231\244\351\203\250\351\227\250", nullptr));
        pushButton_4->setText(QCoreApplication::translate("apart", "\346\230\276\347\244\272\346\234\272\346\236\204", nullptr));
        label_2->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\346\200\273\351\203\250\351\227\250:", nullptr));
        label_3->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\345\210\206\351\203\2501:", nullptr));
        label_4->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\345\210\206\351\203\2502:", nullptr));
        label_5->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\345\210\206\351\203\2503:", nullptr));
        label_6->setText(QCoreApplication::translate("apart", "\350\257\267\350\276\223\345\205\245\345\210\206\351\203\2504:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class apart: public Ui_apart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APART_H
