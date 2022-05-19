/* In a given array 1 & 0 are there. Find the consecutive 1*/
#include<iostream>
using namespace std;

int main(){

    int arr[6] = {0, 0, 1, 0, 1, 1}, track_last_value = 0, max_consec_count =0, counter =0;

    for(int i =0; i < 6; i++){
        // if((arr[i] == 1) && (arr[i] == track_last_value)){
        //     consec_count++;
        //     track_last_value = a[i];
        // }else if((arr[i] == 0 ) && (arr[i] != track_last_value)){
        //     track_last_value = arr[i];
        // }else if((arr[i] == 1) && (arr[i] != track_last_value)){

        // }
        

        if(arr[i] == 1 && (track_last_value == 1)){
            if((arr[i+1] == 0) && i <6){
                counter++;
                max_consec_count = counter;
                
            }else{
                counter++;
            }
            //counter++;

        }else if((arr[i] == 1) &&(track_last_value == 0)){
            counter++;
        }else if((arr[i] == 0) && (track_last_value == 1)){
            
            max_consec_count = counter;
            counter = 0;
        }
        track_last_value = arr[i];
    }

    cout<<"The Maximum consecutive 1 is "<<max_consec_count<<"\n";

    return 0;

}
