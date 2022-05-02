#include <cstddef>
#include <type_traits>
#include <iostream>
#include <typeinfo>

using namespace std;

int main () {
   
   int arr[3] = {4, 1,5};
   for(int i=0; i<3; i++){
       if(i == 0){
           cout << "The value of ptr of "<<i<<" is "<< arr[-1]<<"\t\n" ;
       }

       if(i == 2){
           cout << "The value of ptr of "<<i+1<<" is "<< arr[3]<<"\t\n" ;
           cout << "The value of ptr of "<<i+2<<" is "<< arr[4]<<"\t\n" ;
       }
    //    if(arr[i] == 0){
    //     cout << "The value of ptr is " << arr[i]<<"\t\n";
    //    }
       cout << "The value of ptr of "<<i<<" is "<< arr[i]<<"\t\n" ;
   }
   //cout << "The value of ptr is " << arr[4]<<"\t\n" ;
 
   return 0;
}