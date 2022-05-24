/* Find a substring inside another string. If found then return true or 1 otherwise return false or 0. No built-in function should be used */

#include <iostream>
using namespace std;

int main()
{
    // Test Case 1 :: Input: mainString = "Bangladesh", subString = "desh" || Output: 1
    // Test Case 2 :: Input: mainString = "Bangla", subString = "desh" || Output: 0
    // Test Case 3 :: Input: mainString = "Banglawash", subString = "desh" || Output: 0
    string mainString = "Banglawash", subString = "desh";

    
    int sizeOfMainString = 0, sizeOfSubString = 0;
    bool isContain = false;

    for (int i = 0; mainString[i] != '\0'; i++)
    {
        sizeOfMainString += 1;
    }

    for (int i = 0; subString[i] != '\0'; i++)
    {
        sizeOfSubString += 1;
    }

    for (int i = 0; i < sizeOfMainString; i++)
    {

        if (isContain)
        {
            break;
        }

        for (int j = 0; j < sizeOfSubString; j++)
        {
            if (subString[j] != mainString[i])
            {
                isContain = false;
                break;
            }
            else
            {
                isContain = true;
                i++;
            }
        }
    }

    cout << "The substring's existence is " << isContain << "\n";

    return 0;
}