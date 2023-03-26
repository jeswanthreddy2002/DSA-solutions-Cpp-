//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends


int minDeletions(string str, int n) { 
   
   string first=str;
        string text1=first;
        reverse(str.begin(),str.end());
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
                  if(text1[i-1]==text2[j-1])
                  {
                      v[i][j]=1+v[i-1][j-1];
                  }
                  else{
                         v[i][j]=max(v[i-1][j],v[i][j-1]);
                  }
              }
          }

          int len= v[text1.size()][text2.size()]; 
          return str.size()-len;
} 