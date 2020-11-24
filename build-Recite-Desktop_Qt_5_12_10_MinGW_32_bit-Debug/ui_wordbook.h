/********************************************************************************
** Form generated from reading UI file 'wordbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDBOOK_H
#define UI_WORDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_wordbook
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_save;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *wordbook)
    {
        if (wordbook->objectName().isEmpty())
            wordbook->setObjectName(QString::fromUtf8("wordbook"));
        wordbook->resize(900, 700);
        label = new QLabel(wordbook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(wordbook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 80, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        listWidget = new QListWidget(wordbook);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 160, 550, 400));
        listWidget->setModelColumn(0);
        pushButton_add = new QPushButton(wordbook);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(650, 160, 150, 70));
        pushButton_delete = new QPushButton(wordbook);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(650, 310, 150, 70));
        pushButton_edit = new QPushButton(wordbook);
        pushButton_edit->setObjectName(QString::fromUtf8("pushButton_edit"));
        pushButton_edit->setGeometry(QRect(650, 490, 150, 70));
        pushButton_save = new QPushButton(wordbook);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(80, 600, 150, 70));
        pushButton_exit = new QPushButton(wordbook);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(400, 600, 150, 70));

        retranslateUi(wordbook);

        QMetaObject::connectSlotsByName(wordbook);
    } // setupUi

    void retranslateUi(QDialog *wordbook)
    {
        wordbook->setWindowTitle(QApplication::translate("wordbook", "Dialog", nullptr));
        label->setText(QApplication::translate("wordbook", "\347\231\275\350\257\215\346\226\251", nullptr));
        label_2->setText(QApplication::translate("wordbook", "\345\215\225\350\257\215\346\234\254", nullptr));
        pushButton_add->setText(QApplication::translate("wordbook", "\346\267\273\345\212\240", nullptr));
        pushButton_delete->setText(QApplication::translate("wordbook", "\345\210\240\351\231\244", nullptr));
        pushButton_edit->setText(QApplication::translate("wordbook", "\347\274\226\350\276\221", nullptr));
        pushButton_save->setText(QApplication::translate("wordbook", "\344\277\235\345\255\230", nullptr));
        pushButton_exit->setText(QApplication::translate("wordbook", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wordbook: public Ui_wordbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDBOOK_H
