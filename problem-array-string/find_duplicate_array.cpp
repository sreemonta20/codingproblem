// Find duplicate in array.
//Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Custom array sorting function
void sortasc(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Duplicate finding function
vector<int> duplicates(int arr[], int n)
{
    int count = 0;
    vector<int> v;

    // Custom array sorting function
    sortasc(arr, n);

    // Custom Sort function
    // sort(arr, arr+n);

    cout << " Sorted Array (Asc):"
         << "\t\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Array value at " << i << " is " << arr[i] << "\t\n";
    }
    cout << "\t\n";

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && ((i+1) != n))
        {
            count++;

            if (count == 1)
            {
                v.push_back(arr[i]);
                count = 0;
            }
            // else
            // {
            //     count = 0;
            // }
        }
    }
    if (v.size() == 0)
    {
        v.push_back(-1);
        return v;
    }
    else
    {
        return v;
    }
}

int main()
{
    // test case 1    
    // input: int arr[4] = {0, 3, 1, 2};
    // output: -1

    // test case 2    
    // input: int arr[5] = {2, 3, 1, 2, 3};
    // output: 2, 3

    // test case 3
    // input: int arr[9] = {1, 3, 11, 13, 14, 20, 22, 25, 25};
    // output: 25

    int arr[9] = {1, 3, 11, 13, 14, 20, 22, 25, 25};

    vector<int> ans = duplicates(arr, 9);

    cout << " Duplicate Array (Asc):"
         << "\t\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Array value at " << i << " is " << ans[i] << "\t\n";
    }

    return 0;
}