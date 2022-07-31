//Given an array arr[] containing positive elements. A and B are two numbers defining a range. The task is to check if the array contains all elements in the given range.

// Example 1:  Input: N = 7, A = 2, B = 5, arr[] =  {1, 4, 5, 2, 7, 8, 3}  Output: Yes  Explanation: It has elements between range 2-5 i.e 2,3,4,5.

// Example 2: Input: N = 7, A = 2, B = 6, arr[] = {1, 4, 5, 2, 7, 8, 3} ,Output: No ,Explanation: Array does not contain 6.

#include<iostream>
using namespace std;

bool check_elements(int arr[], int n, int A, int B)
{
    // Your code goes here
    bool isRangeExist = false;
    int nextRangeNum = A, tempA = A, rangeTotalNumCount = 0, temp = 0;;

    for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
    }

    for(int i=0; i<n;i++){
        if(arr[i] == A){
            isRangeExist = true;
        }else if(arr[i] == B){
            isRangeExist = true;
        }
    }
    
    if(isRangeExist){
        while(tempA <= B){
            rangeTotalNumCount++;
            tempA++;
        }

        for(int i=0; i<n; i++){
            if(rangeTotalNumCount == 0){
                break;
            }
            if(nextRangeNum == arr[i]){
                rangeTotalNumCount -=1;
                nextRangeNum += 1;
            }
        }

        if(rangeTotalNumCount == 0){
            return true;
        }else{
            return false;
        }

    }else{
        return false;
    }
    
    
    
}

int main(){
    //int arr[7] = {1, 4, 5, 2, 7, 8, 3};1 9 1 1 5 8 9 4 3 8 10 9 4 1 8 2 6 5 1 8 5 2 6 8 2 8 9 5 10
    int arr[29] = {1, 9, 1, 1, 5, 8, 9, 4, 3, 8, 10, 9, 4, 1, 8, 2, 6, 5, 1, 8, 5, 2, 6, 8, 2, 8, 9, 5, 10};
    cout <<"\t\n";
    bool isfullExist = check_elements(arr, 29, 3, 4);
    if(isfullExist){
        cout <<"Yes "<<"\t\n";
    }else{
        cout <<"No "<<"\t\n";
    }

    return 0;
}