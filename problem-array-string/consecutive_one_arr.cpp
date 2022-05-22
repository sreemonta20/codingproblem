/* In a given array 1 & 0 are there. Find the consecutive 1*/
#include <iostream>
using namespace std;

int main()
{

    // int arr[6] = {0, 0, 1, 0, 1, 1}, track_last_value = 0, max_consec_count =0, counter =0;

    // for(int i =0; i < 6; i++){

    //     //test 1
    //     // if(arr[i] == 1 && (track_last_value == 1)){
    //     //     if((arr[i+1] == 0) && i <6){
    //     //         counter++;
    //     //         max_consec_count = counter;

    //     //     }else{
    //     //         counter++;
    //     //     }
    //     //     //counter++;

    //     // }else if((arr[i] == 1) &&(track_last_value == 0)){
    //     //     counter++;
    //     // }else if((arr[i] == 0) && (track_last_value == 1)){

    //     //     max_consec_count = counter;
    //     //     counter = 0;
    //     // }
    //     // track_last_value = arr[i];

    //     //test 2
    //     // if(i-1 >=0  && i+1 < 6){
    //     //     if((arr[i] == 0) && (track_last_value == 0)){
    //     //         continue;
    //     //     }else if((arr[i] == 0) && (track_last_value == 1)){
    //     //         if(counter > max_consec_count){
    //     //             max_consec_count = counter;
    //     //             counter = 0;
    //     //         }
    //     //     }else if((arr[i] == 1) && (track_last_value == 0 || track_last_value == 1)){
    //     //         counter +=1;
    //     //     }else if((arr[i] == 1) && (6-1 == i)){
    //     //         if(counter > max_consec_count){
    //     //             max_consec_count = counter;
    //     //         }
    //     //     }else if((arr[i] == 0) && (6-1 == i)){
    //     //         if(counter > max_consec_count){
    //     //             max_consec_count = counter;
    //     //         }
    //     //     }
    //     // }
    //     // track_last_value = arr[i];

    // }
    int arr[7] = {0, 1, 0, 0, 1, 1, 0}, max_consecutive_count = 0, oneCount = 0, size = 0;
    cout << "Enter the size of an Array :"
         << "\n";
    cin >> size;
    cout << "\n";

    for (int i = 0; i < size; i++)
    {

        oneCount = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] == 1)
            {
                oneCount++;
            }
            else
            {
                break;
            }
        }
        if (max_consecutive_count < oneCount)
        {
            max_consecutive_count = oneCount;
        }
    }

    cout << "The Maximum consecutive 1 is " << max_consecutive_count << "\n";

    return 0;
}
