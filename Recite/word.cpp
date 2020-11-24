#include "word.h"

Word::Word()
{

}

Word::Word(string en,string na,string ch){
    English = en;
    nature = na;
    Chinese = ch;
}

void Word::setEnglish(string en){
    English = en;
}

void Word::setnature(string n){
    nature = n;
}

void Word::setChinese(string ch){
    Chinese = ch;
}



string Word::getEnglish(){
    return English;
}

string Word::getnature(){
    return nature;
}

string Word::getChinese(){
    return Chinese;
}



