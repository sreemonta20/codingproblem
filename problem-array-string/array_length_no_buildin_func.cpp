/* Find the length of an array without using the built-in function*/
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 0, 3, 6, 9, 4}, size=0;

    size = *(&arr + 1) -arr; // arr points to the 1st element of the array, and &arr points the whole array of 6 elements. So rst is histor.

    cout<< "The length of the array without built-in function is : "<<size<<"\t";

    return 0;
}