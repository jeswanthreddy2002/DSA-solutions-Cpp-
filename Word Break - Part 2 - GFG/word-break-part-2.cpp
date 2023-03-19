//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void rec(unordered_set<string>&st,string s,vector<string>&res,string ch)
{   if(s.length()==0)
{ch.pop_back();
    res.push_back(ch);
    return;
}
    for(int i=0;i<s.size();i++)
    { if(st.find(s.substr(0,i+1))!=st.end())
    {   string left=s.substr(0,i+1);
    
        rec(st,s.substr(i+1,s.length()),res,ch+left+" ");
    
      
    }
    }
}
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        unordered_set<string>st;
        for(int i=0;i<dict.size();i++)
        {
            st.insert(dict[i]);
        }
        vector<string>res;
        string ch;
        rec(st,s,res,ch);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends