//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
   
    int longestCommonSubstr (string S1, string S2, int n, int m)
    { vector<vector<int>>dp(n+1,vector<int>(m+1));
         for(int i=0;i<=n;i++)
         {
             for(int j=0;j<=m;j++)
             {
                 if(i==0||j==0)
                 {
                     dp[i][j]=0;
                 }
             }
         }
         int ma=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=0;
                }
                ma=max(ma,dp[i][j]);
            }
        }
        
        return ma;
    }
};
        
        
         // RECURSION + MEMOISATION (USING MAP)
    // int rec(string S1,string S2,int n,int m,int count,  unordered_map<string,int>store)
    // {
    //     if(n==0||m==0)
    //     {
    //         return count;
    //     }
        
    //     string key=to_string(n)+to_string(m)+to_string(count);
    //     if(store.find(key)!=store.end())
    //     {
    //         return store[key];
    //     }
    //     if(S1[n-1]==S2[m-1])
    //     {
    //         count=rec(S1,S2,n-1,m-1,count+1,store);
    //     }
      
    //     int res=max(count,max(rec(S1,S2,n-1,m,0,store),rec(S1,S2,n,m-1,0,store)));
    //     store[key]=res;
    //     return store[key];
    // }
    // int longestCommonSubstr (string S1, string S2, int n, int m)
    // {
    //     // your code here
    //     unordered_map<string,int>store;
    //     return rec(S1,S2,n,m,0,store); 
    // }
    
    
    
    
    
    //   RECURSION
    
   
    // int rec(string S1,string S2,int n,int m,int count)
    // {
    //     if(n==0||m==0)
    //     {
    //         return count;
    //     }
    //     if(S1[n-1]==S2[m-1])
    //     {
    //         count=rec(S1,S2,n-1,m-1,count+1);
    //     }
      
    //     int res=max(count,max(rec(S1,S2,n,m-1,0),rec(S1,S2,n-1,m,0)));
    //     return res;
    // }
    // int longestCommonSubstr (string S1, string S2, int n, int m)
    // {
    //     // your code here
    //     return rec(S1,S2,n,m,0); 
    // }


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends