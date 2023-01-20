//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {   bool ans;
        string st;
        int n=S.size();
        int i=0;
        for(i;i<S.size()-1;i++)
        {
            if(S[i]!=S[i+1])
            {
                st.push_back(S[i]);
                ans=false;
            }
            else{
                ans=true;
            }
        }
       
     
        if(ans==true)
        {
            st.push_back(S[i]);
        }
        else{
            st.push_back(S[n-1]);
        }
        return st;
        
        
        
        
    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends