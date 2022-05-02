#include <iostream>
using namespace std;

int main()
{
    long inputYear;

    cout << "Enter the year to check leap year:\t";
    cin>> inputYear;

    if (inputYear % 400 == 0)
    {
        cout << "The input year " << inputYear << " is a leap year!";
    }
    else if (inputYear % 100 == 0)
    {
        cout << "The input year " << inputYear << " is not a leap year!";
    }
    else if (inputYear % 4 == 0)
    {
        cout << "The input year " << inputYear << " is a leap year!";
    }
    else
    {
        cout << "The input year " << inputYear << " is not a leap year!";
    }
}
