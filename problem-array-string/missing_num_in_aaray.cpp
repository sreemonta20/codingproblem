//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

//Example 1:

//Input:
//N = 5
//A[] = {1,2,3,5}
//Output: 4

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sumOfArray = 0, sumOfNTerms = 0, missingNum = 0;
        for(long long int i=0; i<n-1; i++){
            sumOfArray += array[i];
        }
        
        sumOfNTerms = (n*(n+1))/2;
        
        missingNum = sumOfNTerms - sumOfArray;
        
        return missingNum;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  