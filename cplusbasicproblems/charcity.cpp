#include <iostream>
#include<sstream>
using namespace std;
int main(){

    int n = 100;
   char city[n];
    
   cout<<"Please input the size of city array : \t";
   cin>>n;
   //cout<<int('R')<<endl;

   for(int i=0; i<n; i++){
       cout<<"Enter the char at position "<<i<<":\t";
       cin>>city[i];
       cout<<"ASCII Value of "<<city[i]<<" is "<<int(city[i]);
       cout<<"\n";
       
   }
   
   cout<<"City is "<<city;
   return 0;

}