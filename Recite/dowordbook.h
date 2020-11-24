#ifndef DOWORDBOOK_H
#define DOWORDBOOK_H

#include<iostream>
#include<string.h>
#include<fstream>
#include"word.h"

using namespace std;

class dowordbook
{
public:
    dowordbook();
};

void createwordbook(string username);               //创建单词本wordbook.txt

int getwordbook(string username,Word *w);           //读取wordbook.txt的内容

void savewordbook(string username,Word *w,int length);      //保存对wordbook的修改

void addword(Word *w,string en,string n,string ch,int *length);     //添加单词

void delete_word(Word *w,int index, int *length);               //删除单词

void editword(Word *w,int index , string en , string na , string ch);       //编辑单词

void createwrongwordbook(string username);          //创建错题本wrongwordbook.txt

int getwrongwordbook(string username,Word *w);      //读取wrongwrongbook.txt

void savewrongwordbook(string username,Word *w,int wronglength);        //保存错题本



#endif // DOWORDBOOK_H
