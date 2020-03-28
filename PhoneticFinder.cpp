#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;


string phonetic::find(string text, string word){
    int i=0;
    int j=0;
    while(j<text.length()-1 && i<word.length()){
        bool flag=true;

        while(text.at(j)!=' '&&j!=text.length()-1) {
            bool similar=false;

            if(isSmiliar(text.at(j),word.at(i)) && flag){
                i++;
                j++;
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
    throw excepion();
    

}

bool isSmiliar (char x, char y){

    y=(char)tolower(y);
    x=(char)tolower(x);


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
        if(( x=='v' || x=='V' ||x=='f' ||x=='W' )){
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


/*
string isSmiliar(string text, string word){
    int i=0;
    int j=0;
    while(j<text.length()-1 && i<word.length()){
        bool flag=true;
        bool done=true;
        while(text.at(j)!=' '&&j!=text.length()-1) {
            bool done=true;

            if( word.at(i)=='c' || word.at(i)=='C' ||word.at(i)=='k' ||word.at(i)=='K' || word.at(i)=='q' || word.at(i)=='Q' ){
                if(( text.at(j)=='c' || text.at(j)=='C' ||text.at(j)=='k' ||text.at(j)=='K' || text.at(j)=='q' || text.at(j)=='Q' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }

            else if( word.at(i)=='g' || word.at(i)=='G' ||word.at(i)=='j' ||word.at(i)=='J' ){
                if(( text.at(j)=='g' || text.at(j)=='G' ||text.at(j)=='j' ||text.at(j)=='J' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='b' || word.at(i)=='B' ||word.at(i)=='f' ||word.at(i)=='F' || word.at(i)=='p' || word.at(i)=='P' ){
                if(( text.at(j)=='b' || text.at(j)=='B' ||text.at(j)=='f' ||text.at(j)=='F' || text.at(j)=='p' || text.at(j)=='P' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='v' || word.at(i)=='V' ||word.at(i)=='w' ||word.at(i)=='W' ){
                if(( text.at(j)=='v' || text.at(j)=='V' ||text.at(j)=='f' ||text.at(j)=='W' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='z' || word.at(i)=='Z' ||word.at(i)=='s' ||word.at(i)=='S' ){
                if(( text.at(j)=='z' || text.at(j)=='Z' ||text.at(j)=='s' ||text.at(j)=='S' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='d' || word.at(i)=='D' ||word.at(i)=='t' ||word.at(i)=='T' ){
                if(( text.at(j)=='d' || text.at(j)=='D' ||text.at(j)=='t' ||text.at(j)=='T' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='o' || word.at(i)=='O' ||word.at(i)=='u' ||word.at(i)=='U' ){
                if(( text.at(j)=='o' || text.at(j)=='O' ||text.at(j)=='u' ||text.at(j)=='U' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }
            else if( word.at(i)=='i' || word.at(i)=='I' ||word.at(i)=='y' ||word.at(i)=='Y' ){
                if(( text.at(j)=='i' || text.at(j)=='I' ||text.at(j)=='y' ||text.at(j)=='Y' )&&flag){
                    i++;
                    j++;
                    done=false;
                }
            }

            else if (text.at(j) == word.at(i) && flag) {
                i++;
                j++;
                done=false;
            }
            if (i == word.length()-1 &&  !done ) {
                if (j == text.length() - 1 || text.at(j) == ' ' || text.at(j + 1) == ' '){

                    if( word.at(i)=='c' || word.at(i)=='C' ||word.at(i)=='k' ||word.at(i)=='K' || word.at(i)=='q' || word.at(i)=='Q' ){
                        if(( text.at(j)=='c' || text.at(j)=='C' ||text.at(j)=='k' ||text.at(j)=='K' || text.at(j)=='q' || text.at(j)=='Q' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }

                    else if( word.at(i)=='g' || word.at(i)=='G' ||word.at(i)=='j' ||word.at(i)=='J' ){
                        if(( text.at(j)=='g' || text.at(j)=='G' ||text.at(j)=='j' ||text.at(j)=='J' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='b' || word.at(i)=='B' ||word.at(i)=='f' ||word.at(i)=='F' || word.at(i)=='p' || word.at(i)=='P' ){
                        if(( text.at(j)=='b' || text.at(j)=='B' ||text.at(j)=='f' ||text.at(j)=='F' || text.at(j)=='p' || text.at(j)=='P' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='v' || word.at(i)=='V' ||word.at(i)=='w' ||word.at(i)=='W' ){
                        if(( text.at(j)=='v' || text.at(j)=='V' ||text.at(j)=='f' ||text.at(j)=='W' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='z' || word.at(i)=='Z' ||word.at(i)=='s' ||word.at(i)=='S' ){
                        if(( text.at(j)=='z' || text.at(j)=='Z' ||text.at(j)=='s' ||text.at(j)=='S' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='d' || word.at(i)=='D' ||word.at(i)=='t' ||word.at(i)=='T' ){
                        if(( text.at(j)=='d' || text.at(j)=='D' ||text.at(j)=='t' ||text.at(j)=='T' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='o' || word.at(i)=='O' ||word.at(i)=='u' ||word.at(i)=='U' ){
                        if(( text.at(j)=='o' || text.at(j)=='O' ||text.at(j)=='u' ||text.at(j)=='U' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }
                    else if( word.at(i)=='i' || word.at(i)=='I' ||word.at(i)=='y' ||word.at(i)=='Y' ){
                        if(( text.at(j)=='i' || text.at(j)=='I' ||text.at(j)=='y' ||text.at(j)=='Y' )&&flag){
                            return text.substr(j - i, i+1);
                        }
                    }

                    else if (text.at(j) == word.at(i) && flag) {
                        return text.substr(j - i, i+1);
                    }

                    //  && text.at(j) == word.at(i)) {

                    cout << j << endl;
                    //    return text.substr(j - i, i+1);
                }
            }

            if (i == word.length()) { //if its prefix but not complete word
                // flag = false;
                i = 0;
            }


            if(done){ //need to go to space
                flag=false;
                i=0;
                j++;
            }
        }
        j++;
    }
    return "wrong";
}
*/
