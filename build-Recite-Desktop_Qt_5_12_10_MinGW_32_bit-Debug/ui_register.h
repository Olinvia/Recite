/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_newusername;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_newpassword;
    QPushButton *pushButton_newregister;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(900, 700);
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 150, 500, 400));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_newusername = new QLineEdit(groupBox);
        lineEdit_newusername->setObjectName(QString::fromUtf8("lineEdit_newusername"));

        horizontalLayout_2->addWidget(lineEdit_newusername);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_newpassword = new QLineEdit(groupBox);
        lineEdit_newpassword->setObjectName(QString::fromUtf8("lineEdit_newpassword"));
        lineEdit_newpassword->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_newpassword);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_newregister = new QPushButton(groupBox);
        pushButton_newregister->setObjectName(QString::fromUtf8("pushButton_newregister"));

        verticalLayout->addWidget(pushButton_newregister);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("Register", " \345\257\206\347\240\201 ", nullptr));
        pushButton_newregister->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
