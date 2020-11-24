#include "recitewordtwo.h"
#include "ui_recitewordtwo.h"

//recitewordtwo与reciteword基本一致 只有给中文选英文和给英文选中文的差异 只需要微调 如调用createchoice_English改为调用createchoice_Chinese等
//在此不多赘述
using namespace std;

extern Word w[100];
extern Word ww[100];

extern int length;
extern string username;

int index1 = 1;
int wronglength1 = 1;

int totalscore1=0;

int getscore1 = 0;


Recitewordtwo::Recitewordtwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recitewordtwo)
{
    ui->setupUi(this);
    length = getwordbook(username,w);
    totalscore1 = 10*(length-1);
    wronglength1 = getwrongwordbook(username,ww);
    QString temp =  QString::fromStdString(w[index1].getChinese());
    ui->label_question_Chinese->setText(temp);
    string choice[4];
    createchoice_English(w , length, index1,choice);
    QString temp1 =  QString::fromStdString(choice[0]);
    ui->pushButton_1->setText(temp1);
    QString temp2 =  QString::fromStdString(choice[1]);
    ui->pushButton_2->setText(temp2);
    QString temp3 =  QString::fromStdString(choice[2]);
    ui->pushButton_3->setText(temp3);
    QString temp4 =  QString::fromStdString(choice[3]);
    ui->pushButton_4->setText(temp4);
}

Recitewordtwo::~Recitewordtwo()
{
    delete ui;
}

void Recitewordtwo::on_pushButton_1_clicked()
{
    string judge = ui->pushButton_1->text().toStdString();
    if(isanswer_English(w,index1,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore1+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength1] = w[index1];
        wronglength1++;
        getscore1-=10;
    }
    if (index1 == length -1){
        savewrongwordbook(username,ww,wronglength1);
        string temp1 = to_string(totalscore1);
        string temp2 = to_string(getscore1);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index1 = 0;
        getscore1 = 0;
        close();
    }
    if(index1 <length -1){
        index1++;
        QString temp =  QString::fromStdString(w[index1].getChinese());
        ui->label_question_Chinese->setText(temp);
        string choice[4];
        createchoice_English(w , length, index1,choice);
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

void Recitewordtwo::on_pushButton_2_clicked()
{
    string judge = ui->pushButton_2->text().toStdString();
    if(isanswer_English(w,index1,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore1 +=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength1] = w[index1];
        wronglength1++;
        getscore1 -=10;
    }
    if (index1 == length -1){
        savewrongwordbook(username,ww,wronglength1);
        string temp1 = to_string(totalscore1);
        string temp2 = to_string(getscore1);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index1 = 0;
        getscore1 = 0;
        close();
    }
    if(index1 <length -1){
        index1++;
        QString temp =  QString::fromStdString(w[index1].getChinese());
        ui->label_question_Chinese->setText(temp);
        string choice[4];
        createchoice_English(w , length, index1,choice);
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





void Recitewordtwo::on_pushButton_3_clicked()
{
    string judge = ui->pushButton_3->text().toStdString();
    if(isanswer_English(w,index1,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore1 +=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength1] = w[index1];
        wronglength1++;
        getscore1 -=10;
    }
    if (index1 == length -1){
        savewrongwordbook(username,ww,wronglength1);
        string temp1 = to_string(totalscore1);
        string temp2 = to_string(getscore1);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index1 = 0;
        getscore1 = 0;
        close();
    }
    if(index1 <length -1){
        index1++;
        QString temp =  QString::fromStdString(w[index1].getChinese());
        ui->label_question_Chinese->setText(temp);
        string choice[4];
        createchoice_English(w , length, index1,choice);
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

void Recitewordtwo::on_pushButton_4_clicked()
{
    string judge = ui->pushButton_4->text().toStdString();
    if(isanswer_English(w,index1,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore1+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength1] = w[index1];
        wronglength1++;
        getscore1-=10;
    }
    if (index1 == length -1){
        savewrongwordbook(username,ww,wronglength1);
        string temp1 = to_string(totalscore1);
        string temp2 = to_string(getscore1);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index1 = 0;
        getscore1 = 0;
        close();
    }
    if(index1 <length -1){
        index1++;
        QString temp =  QString::fromStdString(w[index1].getChinese());
        ui->label_question_Chinese->setText(temp);
        string choice[4];
        createchoice_English(w , length, index1,choice);
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
