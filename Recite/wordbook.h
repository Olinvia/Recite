#ifndef WORDBOOK_H
#define WORDBOOK_H

#include <QDialog>
#include<QListWidgetItem>
#include<QInputDialog>
#include<iostream>
#include<QDebug>
#include"word.h"
#include"dowordbook.h"
#include<QMessageBox>

namespace Ui {
class wordbook;
}

class wordbook : public QDialog
{
    Q_OBJECT

public:
    explicit wordbook(QWidget *parent = nullptr);
    ~wordbook();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_exit_clicked();

    void setPushButtonEnable();

private:
    Ui::wordbook *ui;
};

#endif // WORDBOOK_H
