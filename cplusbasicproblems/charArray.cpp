#include<iostream>
using namespace std;
int main()
{
    //string cityName =  'RajShahi';
    int i = 0, n=8; 
    char city[n];
    //char city[10] = {'R','a','j','s','h','a','h','i'};

    // cout<< "Please give the total size of the input City word :\t";
    // cin>> n;
    // cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<"Please input the letter in the position of "<<i<<":\t";
        cin>> city[i];
        cout<<"\n";

    }

    cout<<"City Name is "<<city;

    // for(int i=0; i <n; i++){
    //     cout<<"Position is "<<i<<" and value is "<<city[i]<<"\n";
    // }

    return 0;
}