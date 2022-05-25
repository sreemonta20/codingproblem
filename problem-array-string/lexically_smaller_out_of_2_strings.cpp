/* Find out the string which is lexicographically smaller out of 2 strings */
#include<iostream>
using namespace std;

int main(){

    // Test Case 1 :: Input: str1 = "mnopqrstu", str2 = "abcde" ;  Output: String 2 is smaller;
    // Test Case 2 :: Input: str1 = "cde", str2 = "ijklm" ;  Output: String 1 is smaller;
    
    string dic = "abcdefghijklmnopqrstuvwxyz", str1 = "mnopqrstu", str2 = "abcde";
    int dicSize = 0, str1Size =0, str2Size = 0, str1Count = 0, str2Count = 0;

    for(int i=0; dic[i] != '\0'; i++){
        dicSize += 1;
    }

    for(int i =0; str1[i] != '\0'; i++){
        str1Size += 1;
    }

    for(int i=0; str2[i] != '\0'; i++){
        str2Size +=1;
    }

    for(int i=0; i<dicSize; i++){

        for(int j=0; j<str1Size; j++){
            if(str1[j] != dic[i]){
                break;
            }else{
                str1Count++;
                i++;
            }
        }
    }

    for(int i =0; i<dicSize; i++){

        for(int j=0; j < str2Size; j++){
            if(str2[j] != dic[i]){
                break;               
            }else{
                str2Count++;
                i++;
            }
        }
    }

    if(str1Count < str2Count){
        cout<<"String 1 is smaller"<<"\n";
    }else{
        cout<<"String 2 is smaller"<<"\n";
    }

    return 0;
}