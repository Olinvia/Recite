#ifndef RECITEWORDTWO_H
#define RECITEWORDTWO_H

//recitewordtwo与reciteword基本一致 只有给中文选英文和给英文选中文的差异 只需要微调 如调用createchoice_English改为调用createchoice_Chinese等
//在此不多赘述



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
class Recitewordtwo;
}

class Recitewordtwo : public QDialog
{
    Q_OBJECT

public:
    explicit Recitewordtwo(QWidget *parent = nullptr);
    ~Recitewordtwo();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Recitewordtwo *ui;
};

#endif // RECITEWORDTWO_H
