//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int>k(n);
	    for(int i=0;i<n;i++)
	    {
	        k[i]=arr[i];
	    }
	int res=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			{  
				k[i]=max(k[j]+arr[i],k[i]);
			
			}
		}
	}
  return *max_element(k.begin(),k.end());
	}  
};
	  

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends