/********************************************************************************
** Form generated from reading UI file 'wrongword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONGWORD_H
#define UI_WRONGWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Wrongword
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Wrongword)
    {
        if (Wrongword->objectName().isEmpty())
            Wrongword->setObjectName(QString::fromUtf8("Wrongword"));
        Wrongword->resize(900, 700);
        label = new QLabel(Wrongword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Wrongword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        listWidget = new QListWidget(Wrongword);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(100, 150, 700, 400));
        pushButton = new QPushButton(Wrongword);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 600, 100, 50));
        pushButton->setFont(font1);

        retranslateUi(Wrongword);

        QMetaObject::connectSlotsByName(Wrongword);
    } // setupUi

    void retranslateUi(QDialog *Wrongword)
    {
        Wrongword->setWindowTitle(QApplication::translate("Wrongword", "Dialog", nullptr));
        label->setText(QApplication::translate("Wrongword", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("Wrongword", "\351\224\231\351\242\230\346\234\254", nullptr));
        pushButton->setText(QApplication::translate("Wrongword", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wrongword: public Ui_Wrongword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONGWORD_H
