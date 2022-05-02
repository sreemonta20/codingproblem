#include<iostream>
using namespace std;
int main(){
    int inputNumber;
    cout <<"Enter the number to check whether odd or even:\t";
    cin>> inputNumber;

    if(inputNumber %2 == 0){
        cout <<"The input number "<<inputNumber<<" is even!";
    }
    else{
        cout <<"The input number " <<inputNumber<<" is odd!";
    }
    return 0;
}