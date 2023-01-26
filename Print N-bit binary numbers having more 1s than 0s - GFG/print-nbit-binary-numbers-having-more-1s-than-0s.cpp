//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
  void sol(string op,int N,  vector<string>&res,int zero,int one)
  {
      if(op.size()==N)
      {
          res.push_back(op);
          return;
      }
      
      string op1=op;
      string op2=op;
      op2.push_back('1');
          sol(op2,N,res,zero,one+1);
      
      if(one>zero&&zero<=N&&one<=N)
      {
          op1.push_back('0');
          
          sol(op1,N,res,zero+1,one);
        
      }
      
          
      
      
  }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string op="1";
	    vector<string>res;
	    sol(op,N,res,0,1);
	    return res;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends