#ifndef WORD_H
#define WORD_H


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
using namespace std;


class Word
{
    public:
        Word();
        Word(string en,string na,string ch);
        void setEnglish(string en);
        void setnature(string n);
        void setChinese(string ch);
        string getEnglish();
        string getnature();
        string getChinese();

    protected:
        string English;
        string nature;
        string Chinese;
};



#endif // WORD_H

