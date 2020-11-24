#ifndef WRONGWORDBOOK_H
#define WRONGWORDBOOK_H

#include <QDialog>
#include<cstring>
#include"word.h"
#include"wordbook.h"

namespace Ui {
class Wrongwordbook;
}

class Wrongwordbook : public QDialog
{
    Q_OBJECT

public:
    explicit Wrongwordbook(QWidget *parent = nullptr);
    ~Wrongwordbook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Wrongwordbook *ui;
};

#endif // WRONGWORDBOOK_H
