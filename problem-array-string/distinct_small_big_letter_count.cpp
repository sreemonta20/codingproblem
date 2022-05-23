/* In a given string there are small letters and big letter exist. Find the total numbers of small and big letter in that string*/

#include<iostream>
using namespace std;

int main(){

    //---------------For char string input Start-----------------------
    //char str[100];
    //---------------For char string input End-----------------------
    string str = "ChaiTanya";
    int size = 0, smallLetterCount = 0, bigLetterCount =0;

//---------------For char string input Start---------------------
    // cout<<"Enter the string :"<<"\n";
    // cin>>str;
    //size = *(&str+1) -str;
//---------------For char string input End-----------------------
    for(int i = 0; str[i] != '\0'; i++){
        size +=1;
    }

    cout<<"Size of the string is :"<<size<<"\n";

    for(int i=0; i<size; i++){
        if(int(str[i]) >= 65 && int(str[i])<= 90){
            bigLetterCount++;

        }else{
            smallLetterCount++;
        }
    }

    cout<<"Total number of small letter & big letters are "<<smallLetterCount<<" & "<<bigLetterCount<<"\n";

    return 0;
}