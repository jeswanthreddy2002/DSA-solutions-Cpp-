//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    void sol(int k,int &pos,vector<int>v)
    {
        if(v.size()==1)
        {   pos=v[0];
            return;
        }
        pos=(pos+k-1)%v.size();
        
        v.erase(v.begin()+pos);
        sol(k,pos,v);
       
        
    }
    int josephus(int n, int k)
    {
       //Your code here
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           v.push_back(i+1);
       }
       int pos=0;
       sol(k,pos,v);
       return pos;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends