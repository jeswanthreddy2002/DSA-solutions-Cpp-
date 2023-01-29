//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int sol(int arr[], int n,vector<int>v)
    {
       
        
        for(int i=1;i<n+1;i++)
        {
         v[i]= max(arr[i-1]+v[i-2],v[i-1]);
        }
        return v[n];
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>v(n+1,0);
     
        return sol(arr,n,v);
      
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends