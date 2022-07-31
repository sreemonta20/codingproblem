/* Sort a given array in ascending and descending */
#include<iostream>
using namespace std;
void sortasc(int arr[], int size){
    int temp = 0;

    // for(int i=0; i<size; i++){

    //     //if(i < 0 && i < size){
    //         if((arr[i] > arr[i+1]) && (i >=0) && ((i+1) < size)){
    //             temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //             // while((arr[i] < arr[i-1]) && i-1 >=0){
    //             //     temp = 0;
    //             //     temp = arr[i];
    //             //     arr[i] = arr[i-1];
    //             //     arr[i-1] =  temp;    
    //             //     i--;     
    //             // }
    //              while((arr[i] < arr[i-1]) && i >=0){
    //                 temp = 0;
    //                 temp = arr[i];
    //                 arr[i] = arr[i-1];
    //                 arr[i-1] =  temp;    
    //                 i--;     
    //             }
    //         }
    //     //}
    // }
    // //return 0;
    
        // for(int i=0; i<size; i++){
        //     if( i >=0 && ((i+1) <size)){
        //         if(arr[i] > arr[i+1]){
        //             temp = arr[i];
        //             arr[i] = arr[i+1];
        //             arr[i+1] = temp;
                    
        //             while((arr[i] < arr[i-1]) && i>=0){
        //                 temp = 0;
        //                 temp = arr[i];
        //                 arr[i] = arr[i-1];
        //                 arr[i-1] = temp;
        //                 i--;
        //             }
        //         }
        //     }
        // }

        for(int i=0; i<size; i++){
            for(int j = i+1; j<size; j++){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
}

void sortdesc(int arr[], int size){
    int temp = 0;

    for(int i =0; i<size; i++){
        if((arr[i] < arr[i+1]) && (i>=0) && ((i+1) < size)){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

            while((arr[i-1] < arr[i]) && i>=0){
                temp = 0;
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                i--;
            }
        }
    }
}
int main(){
    // int arr[6] = {4, 1, 3, 6, 2, 5};
    int arr[6] = {2, 3, 1, 2, 3};
    int arrdesc[6] = {1,2,3,4,5,6};
    int * p =  arr;
    int * q = arrdesc;
    cout <<"Given array (for asc) is :"<<"\t\n";
    for(int i =0; i< 6; i++){
        cout <<"Array value at index "<<i<<" is "<<arr[i]<<"\t";
    }
    cout <<"\t\n";
    cout <<"Sorted array(Asc) is :"<<"\t\n";
    sortasc(arr, 5);
    for(int i =0; i< 5; i++){
        cout <<"Array value at "<<i<<" is "<<p[i]<<"\t\n";
    }

    cout <<"Given array (for desc) is :"<<"\t\n";
    for(int i =0; i< 6; i++){
        cout <<"Array value at index "<<i<<" is "<<arrdesc[i]<<"\t";
    }
    cout <<"\t\n";
    cout <<"Sorted array(desc) is :"<<"\t\n";
    sortdesc(arrdesc, 6);
    for(int i =0; i< 6; i++){
        cout <<"Array value at "<<i<<" is "<<q[i]<<"\t\n";
    }

    return 0;
}



