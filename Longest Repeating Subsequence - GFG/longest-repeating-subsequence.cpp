//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    string text1=str;
		    string text2=str;
	
          vector<vector<int>>v(text1.size()+1,vector<int>(text2.size()+1));
          for(int i=0;i<=text1.size();i++)
          {
              for(int j=0;j<=text2.size();j++)
              {
                  if(i==0||j==0)
                  {
                      v[i][j]=0;
                  }
                
              }
          }

          for(int i=1;i<=text1.size();i++)
          {
              for(int j=1;j<=text2.size();j++)
              {
                  if(text1[i-1]==text2[j-1]&&i!=j)
                  {
                      v[i][j]=1+v[i-1][j-1];
                  }
                  else{
                         v[i][j]=max(v[i-1][j],v[i][j-1]);
                  }
              }
          }

          return v[text1.size()][text2.size()];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends