/********************************************************************************
** Form generated from reading UI file 'reciteword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORD_H
#define UI_RECITEWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Reciteword
{
public:
    QLabel *label;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_question_English;
    QLabel *label_judge;
    QLabel *label_score;

    void setupUi(QDialog *Reciteword)
    {
        if (Reciteword->objectName().isEmpty())
            Reciteword->setObjectName(QString::fromUtf8("Reciteword"));
        Reciteword->resize(900, 700);
        label = new QLabel(Reciteword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 80, 80, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_1 = new QPushButton(Reciteword);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(200, 250, 150, 70));
        pushButton_1->setFont(font);
        pushButton_2 = new QPushButton(Reciteword);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 250, 150, 70));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Reciteword);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 400, 150, 70));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Reciteword);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 400, 150, 70));
        pushButton_4->setFont(font);
        label_2 = new QLabel(Reciteword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 0, 200, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_question_English = new QLabel(Reciteword);
        label_question_English->setObjectName(QString::fromUtf8("label_question_English"));
        label_question_English->setGeometry(QRect(350, 140, 200, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_question_English->setFont(font2);
        label_question_English->setAlignment(Qt::AlignCenter);
        label_judge = new QLabel(Reciteword);
        label_judge->setObjectName(QString::fromUtf8("label_judge"));
        label_judge->setGeometry(QRect(0, 640, 800, 60));
        label_judge->setFont(font);
        label_judge->setAlignment(Qt::AlignCenter);
        label_score = new QLabel(Reciteword);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setGeometry(QRect(800, 640, 100, 60));
        label_score->setFont(font);

        retranslateUi(Reciteword);

        QMetaObject::connectSlotsByName(Reciteword);
    } // setupUi

    void retranslateUi(QDialog *Reciteword)
    {
        Reciteword->setWindowTitle(QApplication::translate("Reciteword", "Dialog", nullptr));
        label->setText(QApplication::translate("Reciteword", "\350\203\214\345\215\225\350\257\215", nullptr));
        pushButton_1->setText(QApplication::translate("Reciteword", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Reciteword", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Reciteword", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("Reciteword", "PushButton", nullptr));
        label_2->setText(QApplication::translate("Reciteword", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_question_English->setText(QApplication::translate("Reciteword", "TextLabel", nullptr));
        label_judge->setText(QApplication::translate("Reciteword", "\345\212\240\346\262\271\357\274\201", nullptr));
        label_score->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reciteword: public Ui_Reciteword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORD_H
