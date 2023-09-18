//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int calculateMaxSumLength(int arr[], int n, int k)
	{
		// Your code goes here
		int less=0;
		int res=0;
	  bool present=false;
		for(int i=0;i<n;i++)
		{  if(arr[i]>k)
	{ 
	if(present)
	{
		    res+=less;
	}
		    less=0;
		    present=false;
		}
		    else
		    { if(arr[i]==k)
		    {
		       present=true;
		    }
		       less++;
		    }
		    
		    
		    
		    
		}
		if(present)
		{
		return res+less;
		}
		return res;
		
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, tmp;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	   	}
	   	cin>>tmp;
            
        
        

        Solution ob;
		cout << ob.calculateMaxSumLength(arr, n, tmp);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends