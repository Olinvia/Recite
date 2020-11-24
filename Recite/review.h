#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>
#include"word.h"
#include<cstring>
#include<QString>
#include"dowordbook.h"
#include<QDebug>
#include"doreciteword.h"
#include<stdlib.h>
#include<QMessageBox>

namespace Ui {
class Review;
}

class Review : public QDialog
{
    Q_OBJECT

public:
    explicit Review(QWidget *parent = nullptr);
    ~Review();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Review *ui;
};

#endif // REVIEW_H
