#ifndef RECITEWORD_H
#define RECITEWORD_H

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
class Reciteword;
}

class Reciteword : public QDialog
{
    Q_OBJECT

public:
    explicit Reciteword(QWidget *parent = nullptr);
    ~Reciteword();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Reciteword *ui;
};









#endif // RECITEWORD_H
