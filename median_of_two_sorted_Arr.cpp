#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalLen = nums1.size() + nums2.size(), lengthCount = 0, temp =0 ;
        vector<int> mergedArr;
        double result;
        
        for(int i=0; i<totalLen; i++){
                mergedArr.push_back(nums1[i]);
        }
        
        for(int j=0; j<totalLen; j++){
            mergedArr.push_back(nums2[j]);
        }
        
        for(int i=0; i<mergedArr.size(); i++){
            for(int j=i+1; j<mergedArr.size(); j++){
                if(mergedArr[i] > mergedArr[j]){
                    temp = mergedArr[i];
                    mergedArr[i] = mergedArr[j];
                    mergedArr[j] = temp;
                }
            }
            
        }
        
        if(mergedArr.size()%2 == 0){
            result = (mergedArr[(mergedArr.size()/2)-1]+mergedArr[(mergedArr.size()/2)])/2;
        }else if(nums1.size() > nums2.size()){
            result = mergedArr[nums1.size()];
        }else{
            result = mergedArr[nums1.size()+1];
        }
        return result;
    }
};