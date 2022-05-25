/* In a given array 1 & 0 are there. Find the consecutive 1*/
#include <iostream>
using namespace std;

int main()
{

    // Test Case 1 :: Input: arr[7] = {0, 1, 0, 0, 1, 1, 0}, Output: 2;
    // Test Case 2 :: Input: arr[10] = {0, 1, 0, 1, 1, 1, 0, 1, 1, 0}, Output: 3;
    // Test Case 3 :: Input: arr[4] = {0, 0, 0, 0}, Output: 0;
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
