#ifndef RECITEWORDTHREE_H
#define RECITEWORDTHREE_H

#include <QDialog>
#include"word.h"
#include<cstring>
#include<QString>
#include"dowordbook.h"
#include<QDebug>
#include"doreciteword.h"
#include<stdlib.h>
#include<QMessageBox>
#include<QInputDialog>

namespace Ui {
class Recitewordthree;
}

class Recitewordthree : public QDialog
{
    Q_OBJECT

public:
    explicit Recitewordthree(QWidget *parent = nullptr);
    ~Recitewordthree();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Recitewordthree *ui;
};

#endif // RECITEWORDTHREE_H
