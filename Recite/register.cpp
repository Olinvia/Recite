#include "register.h"
#include "ui_register.h"
#include"login.h"
#include"dologin.h"
#include"dowordbook.h"
#include<QMessageBox>
#include"clockon.h"

using namespace std;

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}


void Register::on_pushButton_newregister_clicked()              //如果确定注册按钮被点击 会发生以下事件
{
    QString temp1 = ui->lineEdit_newusername->text();           //获取用户输入的用户名
    QString temp2 = ui->lineEdit_newpassword->text();           //获取用户输入的密码
    string username = temp1.toStdString();
    string password = temp2.toStdString();                      //从QString转化为string
    if(judgelogin(username,password) == 1){                     //如果用户不存在
        doregister(username,password);                          //调用doregister注册函数
        string path1;
        path1 = "usersfile\\"+username;
        path1="md "+path1;
        system(path1.c_str());                                  //创建文件夹 文件夹名为username用户名
        createrecorddate(username);                             //为用户创建recorddate.txt 记录登录日期
        createrecordcount(username);                            //为用户创建recordcount.txt 记录打卡天数
        createwordbook(username);                               //为用户创建createwordbook.txt 单词本
        createwrongwordbook(username);                          //为用户创建wrongwordbook.txt 错题本
        QMessageBox::information(this,"注册成功","恭喜你注册成功！");
        close();
    }else{                                                      //如果用户已存在
        QMessageBox::warning(this,"warning","该用户已被注册！");
        ui->lineEdit_newusername->clear();
        ui->lineEdit_newpassword->clear();
    }
}
