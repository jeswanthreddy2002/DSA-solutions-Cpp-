//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	   vector<vector<int>>v(str1.size()+1,vector<int>(str2.size()+1));
          for(int i=0;i<=str1.size();i++)
          {
              for(int j=0;j<=str2.size();j++)
              {
                  if(i==0||j==0)
                  {
                      v[i][j]=0;
                  }
                
              }
          }

          for(int i=1;i<=str1.size();i++)
          {
              for(int j=1;j<=str2.size();j++)
              {
                  if(str1[i-1]==str2[j-1])
                  {
                      v[i][j]=1+v[i-1][j-1];
                  }
                  else{
                         v[i][j]=max(v[i-1][j],v[i][j-1]);
                  }
              }
          }
  int length= v[str1.size()][str2.size()];
  int ans= abs(str1.size()-length)+abs(str2.size()-length);
  return ans;
       
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends