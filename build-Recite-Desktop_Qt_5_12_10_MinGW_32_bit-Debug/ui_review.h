/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Review
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_question_English;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_judge;

    void setupUi(QDialog *Review)
    {
        if (Review->objectName().isEmpty())
            Review->setObjectName(QString::fromUtf8("Review"));
        Review->resize(900, 700);
        label = new QLabel(Review);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Review);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_question_English = new QLabel(Review);
        label_question_English->setObjectName(QString::fromUtf8("label_question_English"));
        label_question_English->setGeometry(QRect(350, 140, 200, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_question_English->setFont(font2);
        label_question_English->setAlignment(Qt::AlignCenter);
        pushButton_1 = new QPushButton(Review);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(200, 250, 150, 70));
        pushButton_1->setFont(font1);
        pushButton_2 = new QPushButton(Review);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 250, 150, 70));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Review);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 400, 150, 70));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(Review);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 400, 150, 70));
        pushButton_4->setFont(font1);
        label_judge = new QLabel(Review);
        label_judge->setObjectName(QString::fromUtf8("label_judge"));
        label_judge->setGeometry(QRect(0, 640, 800, 60));
        label_judge->setFont(font1);
        label_judge->setAlignment(Qt::AlignCenter);

        retranslateUi(Review);

        QMetaObject::connectSlotsByName(Review);
    } // setupUi

    void retranslateUi(QDialog *Review)
    {
        Review->setWindowTitle(QApplication::translate("Review", "Dialog", nullptr));
        label->setText(QApplication::translate("Review", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("Review", "\345\244\215\344\271\240", nullptr));
        label_question_English->setText(QApplication::translate("Review", "TextLabel", nullptr));
        pushButton_1->setText(QApplication::translate("Review", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Review", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Review", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("Review", "PushButton", nullptr));
        label_judge->setText(QApplication::translate("Review", "\345\212\240\346\262\271\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Review: public Ui_Review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
