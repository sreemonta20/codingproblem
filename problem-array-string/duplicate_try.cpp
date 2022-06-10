// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution{
//   public:
//     vector<int> duplicates(int arr[], int n) {
//         int initial = 0, positionTrack = 0;
//         vector<int> v;
//         for(int i =0; i<n-1; i++){
//             if(i== 0){
//                 initial = arr[i];
//                 positionTrack = i;
//             }else{
                
//                 if(initial == arr[i]){
//                     v.push_back(arr[i]);
                    
//                     if(initial != arr[positionTrack+1]){
//                         initial = arr[positionTrack+1];
//                         positionTrack = positionTrack + 1;
                        
//                     }
//                 }
                
//             }
//         }
//         if(v.size() == 0){
//             v.push_back(-1);
//             return v;
//         }else{
//             return v;
//         }
//     }
// };

// vector<int> duplicates(int arr[], int n) {
//      int current;
//   vector<int> v{-1};
//   int count{0};
//   for (int i = 0; i < n-1; i++){
//      current = arr[i];
//      count = 0;
//      for (int j = i+1; j < n; j++){
//         if(arr[j]==current){
//            if(v[0]==-1){v.pop_back();}
//            count++;
//            //v.push_back(current);
//         }
//      }
//      if(count>0)
//         v.push_back(current);

//   }

//   // for(auto var : v){
//   //    cout<<var<<" ";
//   // }
//   // cout<<endl;
//   return v;
// }


// // { Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) cin >> a[i];
//         Solution obj;
//         vector<int> ans = obj.duplicates(a, n);
//         for (int i : ans) cout << i << ' ';
//         cout << endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends



// //   vector<int> duplicates(int arr[], int n) {
// //         int current = 0, count = 0;
// //         vector<int> v;
// //         for(int i =0; i<n; i++){
// //             current = arr[i];
// //             count =0;
// //             for(int j =i+1; j<n; j++){
// //                 if(current == arr[j]){
// //                     //v.push_back(current);
// //                    count++;
// //                 }
// //             }
// //             if(count> 0){
// //                 v.push_back(current);
// //             }
// //         }
// //         if(v.size() == 0){
// //             v.push_back(-1);
// //             return v;
// //         }else{
// //             return v;
// //         }
        
// //     }




// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int temp =0, count=0; vector<int> v;
        
        //Sort Without inbuilt function
        for(int i=0; i<n; i++){
            if( i >=0 && ((i+1) <=n)){
                if(arr[i] > arr[i+1]){
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    
                    while((arr[i] < arr[i-1]) && i>=0){
                        temp = 0;
                        temp = arr[i];
                        arr[i] = arr[i-1];
                        arr[i-1] = temp;
                        i--;
                    }
                }
            }
        }
        
        // finish sort part
        
        //start main function
        //sort(arr, arr+n);
        
        for(int i=0; i<n; i++){
            if(arr[i] == arr[i+1]){
                count++;
                
                if(count == 1){
                    v.push_back(arr[i]);
                }else{
                    count = 0;
                }
            }
        }
        if(v.size() == 0){
            v.push_back(-1);
            return v;
        }else{
            return v;
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends