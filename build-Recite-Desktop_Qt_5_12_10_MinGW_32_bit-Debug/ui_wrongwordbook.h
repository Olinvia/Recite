/********************************************************************************
** Form generated from reading UI file 'wrongwordbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONGWORDBOOK_H
#define UI_WRONGWORDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Wrongwordbook
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Wrongwordbook)
    {
        if (Wrongwordbook->objectName().isEmpty())
            Wrongwordbook->setObjectName(QString::fromUtf8("Wrongwordbook"));
        Wrongwordbook->resize(900, 700);
        label = new QLabel(Wrongwordbook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Wrongwordbook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        listWidget = new QListWidget(Wrongwordbook);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(100, 150, 700, 400));
        pushButton = new QPushButton(Wrongwordbook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 600, 100, 50));
        pushButton->setFont(font1);

        retranslateUi(Wrongwordbook);

        QMetaObject::connectSlotsByName(Wrongwordbook);
    } // setupUi

    void retranslateUi(QDialog *Wrongwordbook)
    {
        Wrongwordbook->setWindowTitle(QApplication::translate("Wrongwordbook", "Dialog", nullptr));
        label->setText(QApplication::translate("Wrongwordbook", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("Wrongwordbook", "\351\224\231\351\242\230\346\234\254", nullptr));
        pushButton->setText(QApplication::translate("Wrongwordbook", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wrongwordbook: public Ui_Wrongwordbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONGWORDBOOK_H
