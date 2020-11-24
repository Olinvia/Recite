/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber_year;
    QLabel *label_3;
    QLCDNumber *lcdNumber_month;
    QLabel *label_4;
    QLCDNumber *lcdNumber_day;
    QLabel *label_5;
    QLabel *label_judge;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLCDNumber *lcdNumber_count;
    QLabel *label_8;
    QPushButton *pushButton_count;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_13;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_15;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Homepage->sizePolicy().hasHeightForWidth());
        Homepage->setSizePolicy(sizePolicy);
        label = new QLabel(Homepage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 200, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(Homepage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 150, 861, 501));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR DCHYJianWeiDGB"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_3->setFont(font1);

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font1);

        verticalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);

        verticalLayout_4->addWidget(pushButton_6);


        horizontalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_6->addWidget(groupBox_2);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdNumber_year = new QLCDNumber(groupBox);
        lcdNumber_year->setObjectName(QString::fromUtf8("lcdNumber_year"));
        lcdNumber_year->setDigitCount(4);
        lcdNumber_year->setProperty("value", QVariant(2020.000000000000000));
        lcdNumber_year->setProperty("intValue", QVariant(2020));

        horizontalLayout->addWidget(lcdNumber_year);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lcdNumber_month = new QLCDNumber(groupBox);
        lcdNumber_month->setObjectName(QString::fromUtf8("lcdNumber_month"));
        lcdNumber_month->setDigitCount(2);
        lcdNumber_month->setProperty("intValue", QVariant(11));

        horizontalLayout->addWidget(lcdNumber_month);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        lcdNumber_day = new QLCDNumber(groupBox);
        lcdNumber_day->setObjectName(QString::fromUtf8("lcdNumber_day"));
        lcdNumber_day->setDigitCount(2);
        lcdNumber_day->setProperty("intValue", QVariant(12));

        horizontalLayout->addWidget(lcdNumber_day);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);

        label_judge = new QLabel(groupBox);
        label_judge->setObjectName(QString::fromUtf8("label_judge"));
        label_judge->setFont(font1);

        verticalLayout->addWidget(label_judge);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);

        lcdNumber_count = new QLCDNumber(groupBox);
        lcdNumber_count->setObjectName(QString::fromUtf8("lcdNumber_count"));
        lcdNumber_count->setEnabled(true);
        lcdNumber_count->setDigitCount(2);

        horizontalLayout_2->addWidget(lcdNumber_count);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_2->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_count = new QPushButton(groupBox);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));
        pushButton_count->setFont(font1);

        verticalLayout_2->addWidget(pushButton_count);


        horizontalLayout_6->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_4);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_11);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_13);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_3);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_10);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_7->addWidget(pushButton);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_16);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_9);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_6);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_15);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_4);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_14);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_12);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_7);


        retranslateUi(Homepage);

        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QDialog *Homepage)
    {
        Homepage->setWindowTitle(QApplication::translate("Homepage", "Dialog", nullptr));
        label->setText(QApplication::translate("Homepage", "\347\231\275\350\257\215\346\226\251", nullptr));
        groupBox_2->setTitle(QApplication::translate("Homepage", "\350\203\214\345\215\225\350\257\215", nullptr));
        pushButton_3->setText(QApplication::translate("Homepage", "\347\273\231\350\213\261\346\226\207\351\200\211\345\207\272\346\255\243\347\241\256\344\270\255\346\226\207", nullptr));
        pushButton_5->setText(QApplication::translate("Homepage", "\347\273\231\344\270\255\346\226\207\351\200\211\345\207\272\346\255\243\347\241\256\350\213\261\346\226\207", nullptr));
        pushButton_6->setText(QApplication::translate("Homepage", "\347\273\231\344\270\255\346\226\207\345\206\231\345\207\272\346\255\243\347\241\256\350\213\261\346\226\207", nullptr));
        groupBox->setTitle(QApplication::translate("Homepage", "\346\211\223\345\215\241", nullptr));
        label_3->setText(QApplication::translate("Homepage", "\345\271\264", nullptr));
        label_4->setText(QApplication::translate("Homepage", "\346\234\210", nullptr));
        label_5->setText(QApplication::translate("Homepage", "\346\227\245", nullptr));
        label_judge->setText(QApplication::translate("Homepage", "             \346\234\252\346\211\223\345\215\241", nullptr));
        label_7->setText(QApplication::translate("Homepage", "    \345\267\262\346\211\223\345\215\241", nullptr));
        label_8->setText(QApplication::translate("Homepage", "\345\244\251", nullptr));
        pushButton_count->setText(QApplication::translate("Homepage", "\346\211\223\345\215\241", nullptr));
        pushButton_2->setText(QApplication::translate("Homepage", "\345\215\225\350\257\215\346\234\254", nullptr));
        pushButton->setText(QApplication::translate("Homepage", "\345\244\215\344\271\240", nullptr));
        pushButton_4->setText(QApplication::translate("Homepage", "\351\224\231\351\242\230\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
