#include <iostream>
#include<sstream>
using namespace std;

int main()
{

    int lengthOfConvertedString, inputNumber, i= 0;
    string convertedString, tempReverseString = "";
    stringstream strConvertHelper;

    cout << "Please input the number to check palindrome:\t";
    cin >> inputNumber;
    strConvertHelper << inputNumber;
    strConvertHelper >> convertedString;

    // Extract length of the converted string;
    for (int i=0; convertedString[i] != '\0'; i++)
    {
        lengthOfConvertedString++;
    }
    cout << "The length of " << inputNumber << " is "<< lengthOfConvertedString<<"\n";

    //Approach 1 of extraction of reverse string
    // for (int j = lengthOfConvertedString-1; convertedString[j] != '\0'; j--)
    // {
    //     tempReverseString = tempReverseString + convertedString[j];
    // }

    //Approach 2 of extraction of reverse string
    lengthOfConvertedString = lengthOfConvertedString-1;
    while(lengthOfConvertedString != -1){
        cout << "lengthOfConvertedString: " << lengthOfConvertedString<<"\n";
        tempReverseString = tempReverseString  + convertedString[lengthOfConvertedString];
        lengthOfConvertedString--;
        
    }

    if (convertedString == tempReverseString)
    {
        cout << "The input number " << inputNumber << " is a palindrome!";
    }
    else
    {
        cout << "The input number " << inputNumber << " is not a palindrome!";
    }
    return 0;
}