//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.

// Example 1:  Input: nums = [2,7,11,15], target = 9  Output: [0,1]  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2: Input: nums = [3,2,4], target = 6  Output: [1,2]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:vector<int> twoSum(int nums[], int n, int target) {
        
        int sum = 0; vector<int> result;
        
        for(int i=0; i< n; i++){
            
            for(int j=i+1; j<n; j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    result.push_back(i);
                    result.push_back(j);
                }else{
                    sum = 0;
                }
            }
        }
        if(result.size() == 0){
            result.push_back(-1);
            return result;
        }else{
            return result;
        }
        
    }
};

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.twoSum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
