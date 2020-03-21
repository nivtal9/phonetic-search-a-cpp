#include <iostream>
#include "PhoneticFinder.hpp"
using namespace std;
string phonetic::find(string text, string word){
    if(isSmiliar(text,word)){
        return word;
    }
    else return 0;
}
bool isSmiliar(string text, string word){
    return true;
}