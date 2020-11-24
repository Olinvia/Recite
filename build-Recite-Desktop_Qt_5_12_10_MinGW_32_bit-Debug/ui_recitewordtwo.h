/********************************************************************************
** Form generated from reading UI file 'recitewordtwo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORDTWO_H
#define UI_RECITEWORDTWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recitewordtwo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_question_Chinese;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_judge;
    QLabel *label_score;

    void setupUi(QDialog *Recitewordtwo)
    {
        if (Recitewordtwo->objectName().isEmpty())
            Recitewordtwo->setObjectName(QString::fromUtf8("Recitewordtwo"));
        Recitewordtwo->resize(900, 700);
        label = new QLabel(Recitewordtwo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Recitewordtwo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_question_Chinese = new QLabel(Recitewordtwo);
        label_question_Chinese->setObjectName(QString::fromUtf8("label_question_Chinese"));
        label_question_Chinese->setGeometry(QRect(350, 140, 200, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_question_Chinese->setFont(font2);
        label_question_Chinese->setAlignment(Qt::AlignCenter);
        pushButton_1 = new QPushButton(Recitewordtwo);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(200, 250, 150, 70));
        pushButton_1->setFont(font1);
        pushButton_2 = new QPushButton(Recitewordtwo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 250, 150, 70));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Recitewordtwo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 400, 150, 70));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(Recitewordtwo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 400, 150, 70));
        pushButton_4->setFont(font1);
        label_judge = new QLabel(Recitewordtwo);
        label_judge->setObjectName(QString::fromUtf8("label_judge"));
        label_judge->setGeometry(QRect(0, 640, 800, 60));
        label_judge->setFont(font1);
        label_judge->setAlignment(Qt::AlignCenter);
        label_score = new QLabel(Recitewordtwo);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setGeometry(QRect(800, 640, 100, 60));
        label_score->setFont(font1);

        retranslateUi(Recitewordtwo);

        QMetaObject::connectSlotsByName(Recitewordtwo);
    } // setupUi

    void retranslateUi(QDialog *Recitewordtwo)
    {
        Recitewordtwo->setWindowTitle(QApplication::translate("Recitewordtwo", "Dialog", nullptr));
        label->setText(QApplication::translate("Recitewordtwo", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("Recitewordtwo", "\350\203\214\345\215\225\350\257\215", nullptr));
        label_question_Chinese->setText(QApplication::translate("Recitewordtwo", "TextLabel", nullptr));
        pushButton_1->setText(QApplication::translate("Recitewordtwo", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Recitewordtwo", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Recitewordtwo", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("Recitewordtwo", "PushButton", nullptr));
        label_judge->setText(QApplication::translate("Recitewordtwo", "\345\212\240\346\262\271\357\274\201", nullptr));
        label_score->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recitewordtwo: public Ui_Recitewordtwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORDTWO_H
