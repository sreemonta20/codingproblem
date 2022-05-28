#include<iostream>
#include<string>
using namespace std;

int main(){

    string date= "21/9/2013"; int size=0, day=0,month=0,year=0;
    
    for(int i = 0; date[i] != '\0'; i++){
        size +=1;
    }

    for(int i=0; i <size; i++){
        if((stoi(date[i])) && (date[i+2] == "/")){
            day = stoi(date[i]+date[i+1]);
        }else if((date[i-1] == "/") && date[i+1] == "/"){
            month = stoi(date[i]);
        }else if(date[i+1] == '\0'){
            year = stoi(date[i-3]+date[i-2]+date[i-1]+date[i]);
        }
    }

    cout<<"Day, month, and year are "<<day<<month<<year<<"\n";

return 0;
}