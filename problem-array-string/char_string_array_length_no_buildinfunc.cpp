/* Find the length of an char string array without using the built-in function*/
#include<iostream>
using namespace std;

int main(){

    char str[100]; int size = 0;
    cout<<"Enter the String : "<<"\t\n";
    cin>>str;

    for(int i =0; str[i] != '\0'; i++){
        size +=1;
    }
    cout<<"Size of the string is :"<<size<<"\n";

    return 0;
}