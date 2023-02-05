//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here'
        if(N==1)
        {
            return arr;
        }
         int idx=-1;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                idx=i;
                break;
            }
        }
       // cout<<arr[idx];
       for(int j=N-1;j>=0;j--)
       {
       if(idx==-1)
       {  reverse(arr.begin(),arr.end());
           return arr;
       }
       if(arr[j]>arr[idx])
       {
        swap(arr[idx],arr[j]);
        reverse(arr.begin()+idx+1,arr.end());
        break;
       }
       }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends