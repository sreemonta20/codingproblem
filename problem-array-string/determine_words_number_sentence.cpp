/* Determine the number of words in a given sentence*/
#include<iostream>
using namespace std;

int main(){
    string sentence = "I am Sreemonta Bhowmik";
    int count = 0, size =0;

    for(int i=0; sentence[i] != '\0'; i++){
        size += 1;
    }
    cout<<"Size of the sentence is "<<size<<"\n";

    for(int i= 0; i< size; i++){
        if(sentence[i] == ' '){
            count++;
        }
        else if((i+1 == size)){
            count++;
        }
    }
    
    cout<<"Total number of words is "<<count<<"\n";
    return 0;
}