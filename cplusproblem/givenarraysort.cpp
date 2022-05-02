#include<iostream>
using namespace std;
void sort(int arr[], int size){
    int temp = 0;

    for(int i=0; i<size; i++){

        //if(i < 0 && i < size){
            if((arr[i] > arr[i+1]) && (i >=0) && ((i+1) < size)){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                while((arr[i] < arr[i-1]) && i-1 >=0){
                    temp = 0;
                    temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] =  temp;         
                }
            }
        //}
    }
    //return 0;
}
int main(){
    int arr[5] = {4, 1, 3, 2, 5};
    int * p =  arr;
    sort(arr, 5);
    for(int i =0; i< 5; i++){
        cout <<"Array value at "<<i<<" is "<<p[i]<<"\t\n";
    }

    return 0;
}

