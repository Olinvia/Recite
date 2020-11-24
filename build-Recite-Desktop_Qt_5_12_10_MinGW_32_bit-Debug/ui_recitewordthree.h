/********************************************************************************
** Form generated from reading UI file 'recitewordthree.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORDTHREE_H
#define UI_RECITEWORDTHREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recitewordthree
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_question_Chinese;
    QLineEdit *lineEdit;
    QLabel *label_judge;
    QLabel *label_score;
    QPushButton *pushButton;

    void setupUi(QDialog *Recitewordthree)
    {
        if (Recitewordthree->objectName().isEmpty())
            Recitewordthree->setObjectName(QString::fromUtf8("Recitewordthree"));
        Recitewordthree->resize(900, 700);
        label = new QLabel(Recitewordthree);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Recitewordthree);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_question_Chinese = new QLabel(Recitewordthree);
        label_question_Chinese->setObjectName(QString::fromUtf8("label_question_Chinese"));
        label_question_Chinese->setGeometry(QRect(350, 210, 200, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_question_Chinese->setFont(font2);
        label_question_Chinese->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(Recitewordthree);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 350, 200, 70));
        lineEdit->setFont(font1);
        label_judge = new QLabel(Recitewordthree);
        label_judge->setObjectName(QString::fromUtf8("label_judge"));
        label_judge->setGeometry(QRect(0, 640, 800, 60));
        label_judge->setFont(font1);
        label_judge->setAlignment(Qt::AlignCenter);
        label_score = new QLabel(Recitewordthree);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setGeometry(QRect(800, 640, 100, 60));
        label_score->setFont(font1);
        pushButton = new QPushButton(Recitewordthree);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 500, 100, 50));
        pushButton->setFont(font1);

        retranslateUi(Recitewordthree);

        QMetaObject::connectSlotsByName(Recitewordthree);
    } // setupUi

    void retranslateUi(QDialog *Recitewordthree)
    {
        Recitewordthree->setWindowTitle(QApplication::translate("Recitewordthree", "Dialog", nullptr));
        label->setText(QApplication::translate("Recitewordthree", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("Recitewordthree", "\350\203\214\345\215\225\350\257\215", nullptr));
        label_question_Chinese->setText(QApplication::translate("Recitewordthree", "TextLabel", nullptr));
        lineEdit->setText(QString());
        label_judge->setText(QApplication::translate("Recitewordthree", "\345\212\240\346\262\271\357\274\201", nullptr));
        label_score->setText(QString());
        pushButton->setText(QApplication::translate("Recitewordthree", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recitewordthree: public Ui_Recitewordthree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORDTHREE_H
