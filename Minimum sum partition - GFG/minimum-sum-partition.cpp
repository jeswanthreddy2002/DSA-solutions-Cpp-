//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    vector<int>ispossible(int arr[], int n,int sum,vector<int>&res)
    {   vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
    
          for(int i=0;i<=n;i++)
          {
              for(int j=0;j<=sum;j++)
              {
                  if(i==0)
                  {
                      dp[i][j]=0;
                  }
                  if(j==0)
                  {
                      dp[i][j]=1;
                  }
              }
          }
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=sum;j++)
          {
              if(arr[i-1]<=j)
              {
                  dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
              }
              else{
                  dp[i][j]=dp[i-1][j];
              }
          }
      }
      int i=n;
         for(int j=0;j<=sum;j++)
         {
             if(dp[i][j])
             {
                 res.push_back(j);
             }
         }
      return res;
      
      
    }
  int minDifference(int arr[], int n)  { 
      
      int ran=0;
 
      for(int i=0;i<n;i++) {
          ran+=arr[i];
      }
   
      vector<int>res;
      
          ispossible(arr,n,ran,res);
      
   
      int mi=INT_MAX;
      for(int i=0;i<res.size();i++) {
          mi=min(mi,abs(ran-2*res[i]));
      }
      return mi;

  }


	
  };




//   vector<int> isSubsetPoss(int arr[], int n, int sum) {
//   	bool t[n + 1][sum + 1];   DP - matrix
//   	  initialization
//   	for (int i = 0; i <= n; i++) {
//   		for (int j = 0; j <= sum; j++) {
//   			if (i == 0)
//   				t[i][j] = false;
//   			if (j == 0)
//   				t[i][j] = true;
//   		}
//   	}

//   	for (int i = 1; i <= n; i++) {
//   		for (int j = 1; j <= sum; j++) {
//   			if (arr[i - 1] <= j)
//   				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
//   			else
//   				t[i][j] = t[i - 1][j];
//   		}
//   	}

//   	vector<int> v;   contains all subset sums possible with n elements
//   	for (int j = 0; j <= sum; j++)
//   		if (t[n][j] == true)
//   		    {cout<<j<<" ";
//   			v.push_back(j);
//   		    }

//   	return v;
//   }

//   int minDifference(int arr[], int n) {
//   	int range = 0;
//   	for (int i = 0; i < n; i++)
//   		range += arr[i];

//   	vector<int> v = isSubsetPoss(arr, n, range);
//   	int mn = INT_MAX;
//   	for (int i = 0; i < v.size(); i++)
//   		mn = min(mn, abs(range - 2 * v[i]));

//   	return mn;
//   }
//   };


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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends