#include "homepage.h"
#include "ui_homepage.h"

using namespace std;

extern string username;


int judgeflag = 0;

Homepage::Homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
    int year,month,day;
    displaydate(&year,&month,&day);         //获取当前日期
    ui->lcdNumber_year->display(year);      //显示年
    ui->lcdNumber_month->display(month);    //显示月
    ui->lcdNumber_day->display(day);        //显示日
    int preyear,premonth,preday,preflag;
    getpredate(username,&preyear,&premonth,&preday,&preflag);       //获取上次记录的年、月、日

    if(preflag == 0){                                               //如果上次未打卡
        recorddate(username,year,month,day,judgeflag);              //记录此次登录日期 未打卡
    }



    if(preyear!=year || premonth!=month || preday!=day){            //如果日期发生变化
        ui->label_judge->setText("\t未打卡");                        //重置为未打卡
    }

    if(preyear==year && premonth==month && preday==day&&preflag==1){    //如果这次与上次日期一致且上次已打卡
        ui->label_judge->setText("\t已打卡");                            //在界面上显示为已打卡
    }


    int count=getcount(username);                               //读取打卡天数
    ui->lcdNumber_count->display(count);                        //在界面上显示打卡天数

}

Homepage::~Homepage()
{
    delete ui;
}





void Homepage::on_pushButton_count_clicked()                //如果打卡按钮被点击 则发生以下事件
{
    int count;
    count=getcount(username);                               //读取打卡天数
    if(ui->label_judge->text()!="\t已打卡"){                 //如果打卡栏没有显示为已打卡
        ui->label_judge->setText("\t已打卡");                //显示为已打卡
        count++;                                            //打卡天数+1
        setcount(username,count);                           //将打卡天数写入recordcount.txt中
        ui->lcdNumber_count->display(count);                //显示当前的打卡天数
        judgeflag = 1;                                      //是否打卡变为1 表示已打卡
        int year,month,day;
        displaydate(&year,&month,&day);                     //获取当前日期
        recorddate(username,year,month,day,judgeflag);      //记录当前日期及打卡状态
    }else{
        QMessageBox::information(this,"information","您今天已打过卡！");        //如果打卡栏显示已打卡 跳出弹窗提醒已打过卡
    }
}

void Homepage::on_pushButton_2_clicked()            //如果单词本按钮被点击 则打开单词本界面
{
    wordbookk = new wordbook(this);
    wordbookk->exec();
}

void Homepage::on_pushButton_3_clicked()          //如果背单词模式一按钮被点击 则发生下列事件
{
    Word w[100];
    int length = getwordbook(username,w);       //获取单词本数组
    if(length-1<4){                             //单词本不满4个单词不能背诵
        QMessageBox::information(this,"注意","单词不满4个,请添加满4个后再背");
    }else{
    reciteword = new Reciteword(this);          //单词本满4个 打开背单词模式一界面
    reciteword->exec();
    }
}

void Homepage::on_pushButton_4_clicked()        //如果错题本按钮被点击 则打开错题本
{
    wrongwordbook = new Wrongwordbook(this);
    wrongwordbook->exec();
}

void Homepage::on_pushButton_clicked()          //如果复习按钮被点击 则发生下列事件
{
    Word w[100];
    int length = getwrongwordbook(username,w);  //得到错题数组和个数
    if(length-1<4){                 //不满4个错题不能复习
        QMessageBox::information(this,"注意","错题不满4个,继续努力");
    }else{                          //满4个错题 打开错题重背界面
    review = new Review(this);
    review->exec();
    }
}

void Homepage::on_pushButton_5_clicked()        //同背单词模式一
{   Word w[100];
    int length = getwordbook(username,w);
    if(length-1<4){
        QMessageBox::information(this,"注意","单词不满4个,请添加满4个后再背");
    }else{
    recitewordtwo = new Recitewordtwo(this);
    recitewordtwo->exec();
    }
}

void Homepage::on_pushButton_6_clicked()        //同背单词模式一
{
    Word w[100];
    int length = getwordbook(username,w);
    if(length-1<4){
        QMessageBox::information(this,"注意","单词不满4个,请添加满4个后再背");
    }else{
    recitewordthree = new Recitewordthree(this);
    recitewordthree->exec();
    }
}
