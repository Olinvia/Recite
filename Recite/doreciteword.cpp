#include "doreciteword.h"
#include"reciteword.h"
#include "ui_reciteword.h"
#include <QDialog>

doreciteword::doreciteword()
{

}

//创建中文选项
void createchoice_Chinese(Word *w , int length,int index,string *choice){
    int i,b;
    int flag[length];
    for(i=0;i<length;i++){
        flag[i]=1;
    }
    flag[0]=0;
    flag[index]=0;
    srand((unsigned)time(NULL));
    b=rand()%4;
    for(i=0;i<4;i++)
    {
        if(i==b)
        choice[b]=w[index].getChinese();
        else
        {
            int c;
            do
            {
                c=rand()%length;
            } while (flag[c]==0);
            choice[i]=w[c].getChinese();
            flag[c]=0;
        }
    }
}


//创建英文选项
void createchoice_English(Word *w , int length,int index,string *choice){
    int i,b;
    int flag[length];
    for(i=0;i<length;i++){
        flag[i]=1;
    }
    flag[0]=0;
    flag[index]=0;
    srand((unsigned)time(NULL));
    b=rand()%4;
    for(i=0;i<4;i++)
    {
        if(i==b)
        choice[b]=w[index].getEnglish();
        else
        {
            int c;
            do
            {
                c=rand()%length;
            } while (flag[c]==0);
            choice[i]=w[c].getEnglish();
            flag[c]=0;
        }
    }
}


//判断中文答案是否正确
bool isanswer_Chinese(Word *w,int index,string judge){
    if(judge == w[index].getChinese()) return true;
    else return false;
}

//判断英文答案是否正确
bool isanswer_English(Word *w,int index,string judge){
    if(judge == w[index].getEnglish()) return true;
    else return false;
}
