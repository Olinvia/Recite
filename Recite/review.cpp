#include "review.h"
#include "ui_review.h"


using namespace std;

extern Word ww[100];

extern string username;

int indexx = 1;
extern int wronglength ;

Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);
    wronglength = getwrongwordbook(username,ww);
    QString temp =  QString::fromStdString(ww[indexx].getEnglish());
    ui->label_question_English->setText(temp);
    string choice[4];
    createchoice_Chinese(ww , wronglength, indexx,choice);
    QString temp1 =  QString::fromStdString(choice[0]);
    ui->pushButton_1->setText(temp1);
    QString temp2 =  QString::fromStdString(choice[1]);
    ui->pushButton_2->setText(temp2);
    QString temp3 =  QString::fromStdString(choice[2]);
    ui->pushButton_3->setText(temp3);
    QString temp4 =  QString::fromStdString(choice[3]);
    ui->pushButton_4->setText(temp4);
}

Review::~Review()
{
    delete ui;
}

void Review::on_pushButton_1_clicked()
{
    string judge = ui->pushButton_1->text().toStdString();
    if(isanswer_Chinese(ww,indexx,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
    }
    if (indexx == wronglength -1){
        savewrongwordbook(username,ww,wronglength);
        close();
    }
    if(indexx <wronglength -1){
        indexx++;
        QString temp =  QString::fromStdString(ww[indexx].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(ww , wronglength, indexx,choice);
        QString temp1 =  QString::fromStdString(choice[0]);
        ui->pushButton_1->setText(temp1);
        QString temp2 =  QString::fromStdString(choice[1]);
        ui->pushButton_2->setText(temp2);
        QString temp3 =  QString::fromStdString(choice[2]);
        ui->pushButton_3->setText(temp3);
        QString temp4 =  QString::fromStdString(choice[3]);
        ui->pushButton_4->setText(temp4);
    }
}

void Review::on_pushButton_2_clicked()
{
    string judge = ui->pushButton_2->text().toStdString();
    if(isanswer_Chinese(ww,indexx,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
    }
    if (indexx == wronglength -1){
        savewrongwordbook(username,ww,wronglength);
        close();
    }
    if(indexx <wronglength -1){
        indexx++;
        QString temp =  QString::fromStdString(ww[indexx].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(ww , wronglength, indexx,choice);
        QString temp1 =  QString::fromStdString(choice[0]);
        ui->pushButton_1->setText(temp1);
        QString temp2 =  QString::fromStdString(choice[1]);
        ui->pushButton_2->setText(temp2);
        QString temp3 =  QString::fromStdString(choice[2]);
        ui->pushButton_3->setText(temp3);
        QString temp4 =  QString::fromStdString(choice[3]);
        ui->pushButton_4->setText(temp4);
    }
}



void Review::on_pushButton_3_clicked()
{
    string judge = ui->pushButton_3->text().toStdString();
    if(isanswer_Chinese(ww,indexx,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
    }
    if (indexx == wronglength -1){
        savewrongwordbook(username,ww,wronglength);
        close();
    }
    if(indexx <wronglength -1){
        indexx++;
        QString temp =  QString::fromStdString(ww[indexx].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(ww , wronglength, indexx,choice);
        QString temp1 =  QString::fromStdString(choice[0]);
        ui->pushButton_1->setText(temp1);
        QString temp2 =  QString::fromStdString(choice[1]);
        ui->pushButton_2->setText(temp2);
        QString temp3 =  QString::fromStdString(choice[2]);
        ui->pushButton_3->setText(temp3);
        QString temp4 =  QString::fromStdString(choice[3]);
        ui->pushButton_4->setText(temp4);
    }
}


void Review::on_pushButton_4_clicked()
{
    string judge = ui->pushButton_4->text().toStdString();
    if(isanswer_Chinese(ww,indexx,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
    }
    if (indexx == wronglength -1){
        savewrongwordbook(username,ww,wronglength);
        close();
    }
    if(indexx <wronglength -1){
        indexx++;
        QString temp =  QString::fromStdString(ww[indexx].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(ww , wronglength, indexx,choice);
        QString temp1 =  QString::fromStdString(choice[0]);
        ui->pushButton_1->setText(temp1);
        QString temp2 =  QString::fromStdString(choice[1]);
        ui->pushButton_2->setText(temp2);
        QString temp3 =  QString::fromStdString(choice[2]);
        ui->pushButton_3->setText(temp3);
        QString temp4 =  QString::fromStdString(choice[3]);
        ui->pushButton_4->setText(temp4);
    }
}
