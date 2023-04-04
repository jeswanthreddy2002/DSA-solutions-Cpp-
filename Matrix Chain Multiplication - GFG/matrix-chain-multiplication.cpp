//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
          vector<vector<int>> dp(N, vector<int>(N,0)); // Initialize dp with correct size and all elements to 0
          for(int i=1;i<N;i++)
          {
              dp[i][i]=0;
          }
          for(int i=N-1;i>=1;i--)
          {
              for(int j=i+1;j<N;j++) // Check for out of range access in j loop condition
              {  
                  int mini=INT_MAX;
                  for(int k=i;k<=j-1;k++)
                  {
                       int temp=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
                       mini=min(temp,mini);
                  }
                  dp[i][j]=mini;
              }
          }
          return dp[1][N-1];
    }
};



    //RECURSION+MEMOISATION

// class Solution{
// public:
// int rec(int N,int arr[],int i,int j,vector<vector<int>>dp)
// {
//     if(i>=j)
//     {
//         return 0;
//     }
//     if(dp[i][j]!=-1)
//     {
//         return dp[i][j];
//     }
//     int mini=INT_MAX;
//     for(int k=i;k<=j-1;k++)
//     {
//         int temp=rec(N,arr,i,k,dp)+rec(N,arr,k+1,j,dp)+arr[i-1]*arr[k]*arr[j];
//         mini=min(temp,mini);
        
//     }
//     dp[i][j]=mini;
//     return dp[i][j];
// }
//     int matrixMultiplication(int N, int arr[])
//     {
//         vector<vector<int>>dp(N-1,vector<int>(N,-1));
//         return rec(N,arr,1,N-1,dp);
//     }
// };


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends