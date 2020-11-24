#include "login.h"
#include "ui_login.h"
#include"dologin.h"
#include<QMessageBox>

using namespace std;

string username;

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_Login_clicked()                   //如果登录按钮被点击 则会发生以下事件
{
    QString temp1 = ui->lineEdit_username->text();          //获取用户输入的用户名
    QString temp2 = ui->lineEdit_password->text();          //获取用户输入的密码
    username = temp1.toStdString();                         //从QString转化为string 且username为外部变量 所有文件都能使用 根据username打开对应用户的文件夹
    string password = temp2.toStdString();                  //从QString转化为string
    switch(judgelogin(username,password)){                  //判断judgelogin的情况
        case 1:                                             //用户不存在
            QMessageBox::warning(this,"Warning","该用户不存在，请先注册！");
            ui->lineEdit_username->clear();                 //清空用户名文本框
            ui->lineEdit_password->clear();                 //清空给密码文本框
            regis = new Register(this);                     //打开注册界面
            regis->exec();
            break;
        case 2:
            QMessageBox::warning(this,"Warning","密码不正确！");  //密码不正确
            ui->lineEdit_password->clear();                     //清空密码文本框
            break;
        case 3:
            hide();                                             //隐藏登录界面
            homepage = new Homepage(this);                      //打开主界面
            homepage->show();
            break;
    }
}

void Login::on_pushButton_Register_clicked()                    //如果注册按钮被点击 则会发生以下事件
{
    regis = new Register(this);                                 //打开注册界面
    regis->exec();
}
