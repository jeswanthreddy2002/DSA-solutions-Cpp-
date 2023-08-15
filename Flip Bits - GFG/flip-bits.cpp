//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int sum=0;
        int count=0;
        int mini=0;
        for(int i=0;i<n;i++)
        {  if(a[i]==0)
        {
            a[i]=-1;
        }
        else{
            count++;
        }
        }
        for(int i=0;i<n;i++)
        { sum+=a[i];
            mini=min(mini,sum);
         
            if(sum>0)
            {
                sum=0;
            }
            
        }
        return count+ (-1)*mini;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends