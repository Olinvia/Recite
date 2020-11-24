#ifndef CLOCKON_H
#define CLOCKON_H

#include <QDialog>
#include<QLCDNumber>
#include<QDate>
#include<QMessageBox>
#include<QTime>
#include<QDebug>
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class Clockon
{
public:
    Clockon();
};


void createrecorddate(string username);             //创建recorddate.txt记录登录日期

void createrecordcount(string username);            //创建recordcount.txt记录打开天数

void displaydate(int *year,int* month, int *day);   //读取当前日期

void recorddate(string username,int year,int month, int day,int flag);      //记录登陆日期

void getpredate(string username,int* preyear,int* premonth,int* preday,int* flag);  //读取登陆日期

void setcount(string username,int count);            //写入打卡天数

int getcount(string username);                      //读取打卡天数


#endif // CLOCKON_H
