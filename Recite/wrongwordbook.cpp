#include "wrongwordbook.h"
#include "ui_wrongwordbook.h"

using namespace std;

extern string username;


Wrongwordbook::Wrongwordbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wrongwordbook)
{
    ui->setupUi(this);
    Word ww[100];
    int wronglength = getwrongwordbook(username,ww);
    for(int i=0;i<wronglength;i++){
        string temp1 = ww[i].getEnglish() +"\t" + ww[i].getnature() + "\t" + ww[i].getChinese();
        QString temp2 = QString::fromStdString(temp1);
        QListWidgetItem *item = new QListWidgetItem(temp2);
        ui->listWidget->addItem(item);
    }
}

Wrongwordbook::~Wrongwordbook()
{
    delete ui;
}

void Wrongwordbook::on_pushButton_clicked()
{
    close();
}
