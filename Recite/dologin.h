#ifndef DOLOGIN_H
#define DOLOGIN_H

#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;


//定义用户user类
class user{
    private:
        string username;                    //用户名
        string password;                    //密码
    public:
        string getUsername();               //得到用户名
        string getPassword();               //得到密码
        void setUsername(string s);         //设置用户名
        void setPassword(string s);         //设置密码
};

int judgelogin(string a,string b);          //判断用户名与密码是否相匹配

void doregister(string a,string b);         //注册用户

#endif // DOLOGIN_H
