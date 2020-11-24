#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include<QLCDNumber>
#include<QDate>
#include<QMessageBox>
#include<QTime>
#include<QDebug>
#include<iostream>
#include<string.h>
#include<fstream>
#include"clockon.h"
#include"wordbook.h"
#include"reciteword.h"
#include"wrongwordbook.h"
#include"review.h"
#include"recitewordtwo.h"
#include"recitewordthree.h"

namespace Ui {
class Homepage;
}

class Homepage : public QDialog
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();



private slots:
    void on_pushButton_count_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Homepage *ui;
    QLCDNumber *lcd;
    wordbook *wordbookk;
    Reciteword *reciteword;
    Recitewordtwo *recitewordtwo;
    Recitewordthree *recitewordthree;
    Wrongwordbook *wrongwordbook;
    Review *review;
};


#endif // HOMEPAGE_H
