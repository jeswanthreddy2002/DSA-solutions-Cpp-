//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void answer( vector<vector<int> >&res,vector<int>v,vector<int>& A ,int i)
    {
       
        if(i>=A.size())
        {  res.push_back(v);
            return;
        }
    //  for(int i=ind;i<A.size();i++)
    //  {
         v.push_back(A[i]);
        answer(res,v,A,i+1);
       v.pop_back();
       answer(res,v,A,i+1);
     //}
     
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>res;
         vector<int>v;
       
        answer(res,v,A,0);
        sort(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends