//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        bool zero;
        vector<int>v;
        int res=-1;
        for(int r=0;r<n;r++)
        {  zero=true;
            for(int c=0;c<n;c++)
            {
                if(M[r][c]!=0)
                { 
                    zero=false;
                    break;
                }
                
            }
      
            if(zero)
            { //cout<<r<<" ";
                v.push_back(r);
            }
            
        }
        bool one;
          for(int i=0;i<v.size();i++)
        { one=true;
            for(int c=0;c<n;c++)
            {
             if(c!=v[i]&&M[c][v[i]]!=1)
             { //cout<<c<<" "<<i<<endl;
                 one=false;
                 break;
             }
          
            }
            //cout<<one<<" ";
            if(one)
            {  
             res=v[i];
             break;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends