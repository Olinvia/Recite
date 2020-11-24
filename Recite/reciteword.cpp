#include "reciteword.h"
#include "ui_reciteword.h"


using namespace std;

extern Word w[100];             //单词数组w
Word ww[100];                   //错词数组ww

extern int length;              //w数组长度
extern string username;         //用户

int index = 1;                  //下标
int wronglength = 1;            //错题的个数

int totalscore=0;               //总分

int getscore = 0;               //用户得分

Reciteword::Reciteword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reciteword)
{
    ui->setupUi(this);
    length = getwordbook(username,w);           //获取单词数组和长度
    totalscore = 10*(length-1);                 //计算总分
    wronglength = getwrongwordbook(username,ww);        //获取错词数组和长度
    QString temp =  QString::fromStdString(w[index].getEnglish());      //获取第1个单词的英文
    ui->label_question_English->setText(temp);                          //显示在问题框中
    string choice[4];                                   //4个选项
    createchoice_Chinese(w , length, index,choice);     //随机创建4个中文选项
    QString temp1 =  QString::fromStdString(choice[0]);
    ui->pushButton_1->setText(temp1);
    QString temp2 =  QString::fromStdString(choice[1]);
    ui->pushButton_2->setText(temp2);
    QString temp3 =  QString::fromStdString(choice[2]);
    ui->pushButton_3->setText(temp3);
    QString temp4 =  QString::fromStdString(choice[3]);
    ui->pushButton_4->setText(temp4);                   //从string转换为QString并显示在选项框里
}

Reciteword::~Reciteword()
{
    delete ui;
}

void Reciteword::on_pushButton_1_clicked()              //如果选项1被点击 则发生以下事件
{
    string judge = ui->pushButton_1->text().toStdString();      //获取问题框中的英文
    if(isanswer_Chinese(w,index,judge)){                        //如果获取的英文与答案相一致
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");          //在界面下方显示绿色的“恭喜你答对了” “+10分”
        getscore+=10;               //答对加10分
    }else{                                                      //如果获取的英文与答案不一致
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");            //在界面下方显示红色的“很遗憾你答错了”“-10分”
        ww[wronglength] = w[index];                             //将错误的词添加到错题本上
        wronglength++;                                          //错题长度+1
        getscore-=10;                                           //答错扣10分
    }
    if (index == length -1){                                    //如果回答到了最后一个单词
        savewrongwordbook(username,ww,wronglength);             //保存错题
        string temp1 = to_string(totalscore);
        string temp2 = to_string(getscore);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);         //显示测试结果
        index = 0;
        getscore = 0;           //回到初始状态，可再背一遍
        close();
    }
    if(index <length -1){                       //如果还没背完
        index++;                                //背诵下一个单词
        QString temp =  QString::fromStdString(w[index].getEnglish());
        ui->label_question_English->setText(temp);      //在问题框中显示下一个单词的英文
        string choice[4];
        createchoice_Chinese(w , length, index,choice);     //随机创建四个中文选项
        QString temp1 =  QString::fromStdString(choice[0]);
        ui->pushButton_1->setText(temp1);
        QString temp2 =  QString::fromStdString(choice[1]);
        ui->pushButton_2->setText(temp2);
        QString temp3 =  QString::fromStdString(choice[2]);
        ui->pushButton_3->setText(temp3);
        QString temp4 =  QString::fromStdString(choice[3]);
        ui->pushButton_4->setText(temp4);           //将4个英文选项显示出来
    }
}

void Reciteword::on_pushButton_2_clicked()          //同pushButton_1
{
    string judge = ui->pushButton_2->text().toStdString();
    if(isanswer_Chinese(w,index,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength] = w[index];
        wronglength++;
        getscore-=10;
    }
    if (index == length -1){
        savewrongwordbook(username,ww,wronglength);
        string temp1 = to_string(totalscore);
        string temp2 = to_string(getscore);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index = 0;
        getscore = 0;
        close();
    }
    if(index <length -1){
        index++;
        QString temp =  QString::fromStdString(w[index].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(w , length, index,choice);
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



void Reciteword::on_pushButton_3_clicked()          //同pushButton_1
{
    string judge = ui->pushButton_3->text().toStdString();
    if(isanswer_Chinese(w,index,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength] = w[index];
        wronglength++;
        getscore-=10;
    }
    if (index == length -1){
        savewrongwordbook(username,ww,wronglength);
        string temp1 = to_string(totalscore);
        string temp2 = to_string(getscore);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index = 0;
        getscore = 0;
        close();
    }
    if(index <length -1){
        index++;
        QString temp =  QString::fromStdString(w[index].getEnglish());
        ui->label_question_English->setText(temp);
        string choice[4];
        createchoice_Chinese(w , length, index,choice);
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

void Reciteword::on_pushButton_4_clicked()              //同pushButton_1
{
    string judge = ui->pushButton_4->text().toStdString();
    if(isanswer_Chinese(w,index,judge)){
        ui->label_judge->setText("恭喜你答对了!");
        ui->label_judge->setStyleSheet("color:green");
        ui->label_score->setText("+10");
        ui->label_score->setStyleSheet("color:green");
        getscore+=10;
    }else{
        ui->label_judge->setText("很遗憾你答错了。");
        ui->label_judge->setStyleSheet("color:red");
        ui->label_score->setText("-10");
        ui->label_score->setStyleSheet("color:red");
        ww[wronglength] = w[index];
        wronglength++;
        getscore-=10;
    }
    if (index == length -1){
        savewrongwordbook(username,ww,wronglength);
        string temp1 = to_string(totalscore);
        string temp2 = to_string(getscore);
        string message = "本次测试总分为：" + temp1 + "\n" +"你的得分为："+ temp2;
        QString qmessage = QString::fromStdString(message);
        QMessageBox::information(this,"测试结果",qmessage);
        index = 0;
        getscore = 0;
        close();
    }
    if(index <length -1){
        index++;
        QString temp =  QString::fromStdString(w[index].getEnglish());
        ui->label_question_English->setText(temp);
        string choice1,choice2,choice3,choice4;
        string choice[4];
        createchoice_Chinese(w , length, index,choice);
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
