//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void sol(string S, set<string>&v,string op)
	{
	    if(S.size()==0)
	    {
	        v.insert(op);
	        return;
	    }
	    string ch=string(1,S[0]);
	    S.erase(S.begin()+0);
	    for(int i=0;i<=op.size();i++)
	    {  
	        string first=op.substr(0,i);
	        string last=op.substr(i,op.size());
	        sol(S,v,first+ch+last);
	    }
	    
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    string op;
		    set<string>v;
		    vector<string>ans;
		    sol(S,v,op);
		    for(auto it:v)
		    {
		        ans.push_back(it);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends