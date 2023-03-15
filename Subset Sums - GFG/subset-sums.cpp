//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void rec(vector<int>&arr, int N,int sum,int i,  vector<int>&v)
{
    if(i>=N)
    {
        v.push_back(sum);
        return;
    }
    // cout<<sum<<" ";
    
    rec(arr,N,sum-arr[i],i+1,v);
   
    rec(arr,N,sum,i+1,v);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        vector<int>v;
        rec(arr,N,sum,0,v);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends