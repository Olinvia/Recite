#ifndef DORECITEWORD_H
#define DORECITEWORD_H

#include"word.h"
#include<time.h>
using namespace std;

class doreciteword
{
public:
    doreciteword();
};

void createchoice_Chinese(Word *w , int length,int index,string *choice);       //创建中文选项
void createchoice_English(Word *w , int length,int index,string *choice);       //创建英文选项

bool isanswer_Chinese(Word *w,int index,string judge);                  //判断中文答案是否正确

bool isanswer_English(Word *w,int index,string judge);                  //判断英文答案是否正确




#endif // DORECITEWORD_H
