#include "dowordbook.h"

dowordbook::dowordbook()
{

}

//创建单词本wordbook.txt
void createwordbook(string username){
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//wordbook.txt";            //创建wordbook.txt
    outfile.open(path.c_str(),ios::out);
    outfile << "英文\t词性\t中文";                    //写入第一行
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile.close();
}

//创建错题本wrongwordbook.txt
void createwrongwordbook(string username){
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//wrongwordbook.txt";       //创建wrongwordbook.txt
    outfile.open(path.c_str(),ios::out);
    outfile << "英文\t词性\t中文";                    //写入第一行
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile.close();
}

//读取wordbook.txt的内容
int getwordbook(string username,Word *w){
    //读取wordbook.txt
    ifstream infile;
    string temp1,temp2,temp3;
    int i=0;
    string path = "usersfile//";
    path=path+username+"//wordbook.txt";
    infile.open(path.c_str(),ios::in);
    if(!infile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    while(!infile.eof()){
        infile>>temp1>>temp2>>temp3;
        w[i].setEnglish(temp1);
        w[i].setnature(temp2);
        w[i].setChinese(temp3);         //将单词存入w数组中
        i++;
    }
    infile.close();
    return i;
}

//读取wrongwrongbook.txt
int getwrongwordbook(string username,Word *w){
    ifstream infile;
    string temp1,temp2,temp3;
    int i=0;
    string path = "usersfile//";
    path=path+username+"//wrongwordbook.txt";
    infile.open(path.c_str(),ios::in);
    if(!infile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    while(!infile.eof()){
        infile>>temp1>>temp2>>temp3;
        w[i].setEnglish(temp1);
        w[i].setnature(temp2);
        w[i].setChinese(temp3);
        i++;
    }
    infile.close();
    return i;
}

//添加单词
void addword(Word *w,string en,string n,string ch,int *length){
    int i=*length;
    w[i].setEnglish(en);
    w[i].setnature(n);
    w[i].setChinese(ch);
    *length +=1;
}

//保存对wordbook的修改
void savewordbook(string username,Word *w,int length){
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//wordbook.txt";
    outfile.open(path.c_str(),ios::out);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    for(int i =0;i < length;i++){
        outfile << endl;
        outfile<<w[i].getEnglish()<<" "<<w[i].getnature()<<" "<<w[i].getChinese();  //将w数组写入wordbokk.txt
    }
    outfile.close();
}

//保存对wrongwordbook的修改
void savewrongwordbook(string username,Word *ww,int wronglength){
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//wrongwordbook.txt";
    outfile.open(path.c_str(),ios::out);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }

    for(int i =0;i < wronglength;i++){
        outfile << endl;
        outfile<<ww[i].getEnglish()<<" "<<ww[i].getnature()<<" "<<ww[i].getChinese();   //将ww数组写入wrongwordbook.txt
    }
    outfile.close();
}



//删除单词
void delete_word(Word *w,int index, int *length){
    int i = 0;
    while (i!=index)
        i++;
    while(i!=*length-1)
        {
            w[i].getEnglish()=w[i+1].getEnglish();
            w[i].getnature()=w[i+1].getnature();
            w[i].getChinese()=w[i+1].getChinese();
            i++;
        }
    *length = *length - 1;
}

//编辑单词
void editword(Word *w,int index , string en , string na , string ch){
    w[index].setEnglish(en);
    w[index].setnature(na);
    w[index].setChinese(ch);
}

