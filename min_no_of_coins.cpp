
/*
#include<bits/stdc++.h>
using namespace std;
int mincost(vector<int>&v,int amt)
{
    if(amt==0)
    {
        return 0;
    }

    if(amt<0)
    {
        return  INT_MAX;    
    }
    int mini=INT_MAX;                                // USING RECURSION
    for(int i=0;i<v.size();i++)
    {
        int ans=mincost(v,amt-v[i]);
        if(ans!=INT_MAX)
        {
            mini=min(mini,1+ans);

        }
    }
    return mini;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {  int k;
    cin>>k;
        v.push_back(k);
    }
    int amt;
    cin>>amt;

    if(mincost(v,amt)==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
            cout<<mincost(v,amt)<<endl;
    }
}

*/

             //NOW MEMOZIZE THE RECURSIVE APPROACH

/*
#include<bits/stdc++.h>
using namespace std;
int mincost(vector<int>&v,int amt,vector<int>&dp)
{
    if(amt==0)
    {
        return 0;
    }

    if(amt<0)
    {
        return  INT_MAX;    
    }
    int mini=INT_MAX; 
    if(dp[amt]!=-1)
    {
        return dp[amt];
    }                              
    for(int i=0;i<v.size();i++)
    {
        int ans=mincost(v,amt-v[i],dp);
        if(ans!=INT_MAX)
        {
            mini=min(mini,1+ans);

        }
    }
    dp[amt]=mini;
    return mini;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {  int k;
    cin>>k;
        v.push_back(k);
    }
    int amt;
    cin>>amt;
   vector<int>dp(amt+1,-1);
    if(mincost(v,amt,dp)==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
            cout<<mincost(v,amt,dp)<<endl;
    }
}

*/

     // now using tabulation method

