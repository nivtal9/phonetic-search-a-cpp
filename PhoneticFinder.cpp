#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;


string phonetic::find(string text, string word){
    int i=0;
    int j=0;
    while(j<text.length() && i<word.length()){
        bool flag=true;

        while(text.at(j)!=' '&&j!=text.length()) {
            bool similar=false;

            if(isSmiliar(text.at(j),word.at(i)) && flag){
                if(word.length()-1!=i) {
                    i++;
                }
                
                if(text.length()-1!=j ) {
                    j++;
                }
                similar=true;
            }
            if (i == word.length()-1 &&  similar ) {
                if (j == text.length() - 1 || text.at(j) == ' ' || text.at(j + 1) == ' '){
                    //  return text.substr(j - i, i+1);
                    if(isSmiliar(text.at(j),word.at(i)) && flag){
                        return text.substr(j - i, i+1);
                    }
                }
            }

            if (i == word.length()) { //if its prefix but not complete word
                // flag = false;
                i = 0;
            }

            if(!similar){ //need to go to space
                flag=false;
                i=0;
                j++;
            }
        }
        j++;
    }
   //return
    throw exception();


}

bool isSmiliar (char x, char y){

    //y=(char)tolower(y);
    //x=(char)tolower(x);


    if( y =='c' || y=='C' ||y=='k' ||y=='K' || y=='q' || y=='Q' ){
        if(( x=='c' || x=='C' ||x=='k' ||x=='K' || x=='q' || x=='Q' )){
          return true;
        }
    }

    else if( y=='g' ||y=='G' ||y=='j' ||y=='J' ){
        if(( x=='g' || x=='G' ||x=='j' ||x=='J' )){
            return true;
        }
    }
    else if( y=='b' || y=='B' ||y=='f' ||y=='F' || y=='p' || y=='P' ){
        if(( x=='b' || x=='B' ||x=='f' ||x=='F' || x=='p' || x=='P' )){
            return true;
        }
    }
    else if( y=='v' || y=='V' ||y=='w' ||y=='W' ){
        if(( x=='v' || x=='V' ||x=='w' ||x=='W' )){
            return true;
        }
    }
    else if( y=='z' || y=='Z' ||y=='s' ||y=='S' ){
        if(( x=='z' || x=='Z' ||x=='s' ||x=='S' )){
            return true;
        }
    }
    else if( y=='d' || y=='D' ||y=='t' ||y=='T' ){
        if(( x=='d' || x=='D' ||x=='t' ||x=='T' )){
            return true;
        }
    }
    else if( y=='o' || y=='O' ||y=='u' ||y=='U' ){
        if(( x=='o' || x=='O' ||x=='u' ||x=='U' )){
            return true;
        }
    }
    else if( y=='i' || y=='I' |y=='y' ||y=='Y' ){
        if(( x=='i' || x=='I' ||x=='y' ||x=='Y' )){
            return true;
        }
    }

    else if (x== y) {
        return true;
    }

    return false;
}
