//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void rec(vector<vector<int>> &m, int n,string s,int r,int c,vector<string>&v)
    {
        if(r==n-1&&c==n-1)
        {
            v.push_back(s);
            return;
        }
        if(m[r][c]==0||r<0||c<0|c>=n||r>=n)
        {
            return;
        }
        m[r][c]=0;
        if(c-1>=0&&m[r][c-1]!=0)
        {
            s.push_back('L');
            rec(m,n,s,r,c-1,v);
            s.pop_back();
        }
         if(c+1<n&&m[r][c+1]!=0)
        {
            s.push_back('R');
            rec(m,n,s,r,c+1,v);
            s.pop_back();
        }
         if(r-1>=0&&m[r-1][c]!=0)
        {
            s.push_back('U');
            rec(m,n,s,r-1,c,v);
            s.pop_back();
        }
         if(r+1<n&&m[r+1][c]!=0)
        {
            s.push_back('D');
            rec(m,n,s,r+1,c,v);
            s.pop_back();
        }
        m[r][c]=1;
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>v;
        if(m[n-1][n-1]==0||m[0][0]==0)
        { v.push_back("-1");
            return v;
        } 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m[i][j]==1)
                {
                     rec(m,n,"",i,j,v);
                         return v;
                }
            }
        }
       
    
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends