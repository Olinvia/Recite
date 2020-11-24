#include "clockon.h"




using namespace std;

Clockon::Clockon()
{

}

//创建recorddate.txt记录登录日期
void createrecorddate(string username){
    //创建recorddate.txt
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//recorddate.txt";      //设置recorddate.txt的路径 在usersfile文件夹下的用户文件夹下
    outfile.open(path.c_str(),ios::app);
    outfile<<"2001 3 13 0"<<endl;
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile.close();
}

//创建recordcount.txt记录打开天数
void createrecordcount(string username){
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//recoedcount.txt";     //设置recordcount.txt的路径 在usersfile文件夹下的用户文件夹下
    outfile.open(path.c_str(),ios::app);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile<<"0";                               //设置初始的打卡天数为0
    outfile.close();
}



//获取当前日期
void displaydate(int *year,int* month, int *day){
    QDate currentdate = QDate::currentDate();
    QString str1 = currentdate.toString("yyyy-MM-dd");
    QByteArray ba = str1.toLatin1();
    char *dateStr = ba.data();
    char *temp1 = strtok(dateStr,"-");
    char *temp2 = strtok(nullptr,"-");
    char *temp3 = strtok(nullptr,"-");               //调用QDate.h中的函数 读取当前日期
    QString temp4(temp1);                            //将char转化为QString
    QString temp5(temp2);
    QString temp6(temp3);
    *year = temp4.toInt();
    *month = temp5.toInt();
    *day = temp6.toInt();                           //将QString转化为int 以指针形式返回传值
}


//记录登陆日期
void recorddate(string username,int year,int month, int day,int flag){
    //写入recorddate.txt
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//recorddate.txt";
    outfile.open(path.c_str(),ios::app);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile << year << " " << month << " "<< day<<" "<<flag<<endl;      //将日期和打卡状态写入recorddate.txt中
    outfile.close();
}

//读取登陆日期
void getpredate(string username,int* preyear,int* premonth,int* preday,int *flag){
    //读取recorddate.txt
    ifstream infile;
    string temp1,temp2,temp3,temp4;
    string path = "usersfile//";
    path=path+username+"//recorddate.txt";
    infile.open(path.c_str(),ios::in);
    if(!infile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    while(!infile.eof()){
        infile>>temp1>>temp2>>temp3>>temp4;     //将年、月、日、打卡状态存入temp1、2、3、4中
    }               //循环使下一行信息覆盖上一行信息 最终得到的temp1、2、3、4为最后一行的年、月、日、打卡状态
    *preyear = atoi(temp1.c_str());
    *premonth = atoi(temp2.c_str());
    *preday = atoi(temp3.c_str());
    *flag = atoi(temp4.c_str());        //将string转化为int
    infile.close();
}

//写入打卡天数
void setcount(string username,int count){
    //写入recordcount.txt
    ofstream outfile;
    string path = "usersfile//";
    path=path+username+"//recoedcount.txt";
    outfile.open(path.c_str(),ios::out);
    if(!outfile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    outfile << count;       //将count写入recordcount.txt中
    outfile.close();
}

//读取打卡天数
int getcount(string username){
    //读取recordcount.txt
    ifstream infile;
    int count;
    string path = "usersfile//";
    path=path+username+"//recoedcount.txt";
    infile.open(path.c_str(),ios::in);
    if(!infile.is_open()){
        cout<<"Open File Failure"<<endl;
        exit(0);
    }
    infile >> count;        //读取count
    infile.close();
    return count;           //返回count

}



