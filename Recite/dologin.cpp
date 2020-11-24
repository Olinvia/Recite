#include"dologin.h"

//得到用户名
string user::getUsername(){
    return username;
}

//得到密码
string user::getPassword(){
    return password;
}

//设置用户名
void user::setUsername(string s){
    username = s;
}

//设置密码
void user::setPassword(string s){
    password = s;
}

//判断用户名与密码是否相配
int judgelogin(string a,string b){  //a为用户名文本框中读取到的字符串 b为密码文本框中读取到的字符串
    string temp1,temp2;
    user u[100];                    //用u[i]数组存储用户信息
    int i = 0 ,length=0;
    //读取users.txt中的用户信息
    ifstream infile;
    infile.open("usersfile//users.txt",ios::in);
    if(!infile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    while(!infile.eof()){
        infile>>temp1>>temp2;           //将users.txt一行中的两个字符串用temp1 temp2存储
        u[i].setUsername(temp1);        //temp1为用户名
        u[i].setPassword(temp2);        //temp2为密码
        i++;
    }
    length=i;                           //length为所有用户的个数
    infile.close();                     //关闭文件
    for(i = 0;i<length;i++){
            if(a!=u[i].getUsername())   //如果a不在u[i].name中 则检索下一个
                continue;
            if(a == u[i].getUsername()) //如果检索到a在u[i].name中 跳出循环
                break;
        }
        if(i == length){                                            //没有搜索到a
            return 1;                                               //不存在该用户
        }else{
            if(b!=u[i].getPassword()){                              //b不等于对应的密码
                return 2;                                           //密码错误
            }else{
                return 3;                                           //a b对应且存在 欢迎
            }
        }
}


//注册用户
void doregister(string a,string b){                           //a为用户名文本框中读取到的字符串 b为密码文本框中读取到的字符串
    //向users.txt中写入用户信息
    ofstream outfile;
    outfile.open("usersfile//users.txt",ios::app);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile << endl;
    outfile <<a<<" "<<b;                                        //写入a和b
    outfile.close();
}




