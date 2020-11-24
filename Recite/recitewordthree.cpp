#include "recitewordthree.h"
#include "ui_recitewordthree.h"

using namespace std;

extern Word w[100];
extern Word ww[100];

extern int length;
extern string username;

int index2 = 1;
int wronglength2 = 1;

int totalscore2=0;

int getscore2 = 0;


Recitewordthree::Recitewordthree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recitewordthree)
{
    ui->setupUi(this);
    length = getwordbook(username,w);
    totalscore2 = 10*(length-1);
    wronglength2 = getwrongwordbook(username,ww);
    QString temp =  QString::fromStdString(w[index2].getChinese());
    ui->label_question_Chinese->setText(temp);
}

Recitewordthree::~Recitewordthree()
{
    delete ui;
}





void Recitewordthree::on_pushButton_clicked()
{
    string judge = ui->lineEdit->text().toStdString();      //获取用户输入的内容
    if(isanswer_English(w,index2,judge)){                   //判断是否正确
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        ui->lineEdit->clear();                              //清空输入栏以便下一个输入
        getscore2+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength2] = w[index2];                       //错题存入错题数组
        wronglength2++;
        getscore2-=10;
        ui->lineEdit->clear();
    }
    if (index2 == length -1){
        savewrongwordbook(username,ww,wronglength2);
        string temp1 = to_string(totalscore2);
        string temp2 = to_string(getscore2);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index2 = 0;
        getscore2 = 0;
        close();
    }
    if(index2 <length -1){
        index2++;
        QString temp =  QString::fromStdString(w[index2].getChinese());
        ui->label_question_Chinese->setText(temp);
    }
}
