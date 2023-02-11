//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    //cout<<nums[nums.size()-1];
	    vector<int>v;
	    v=nums;
	     
	    sort(nums.begin(),nums.end());
	   vector<int>res(nums[nums.size()-1]+1,0);
	  
	     for(int i=0;i<nums.size();i++)
	     { 
	         res[nums[i]]=i;
	     }
	  
	   
	     int count=0;
	     for(int i=0;i<v.size();i++)
	     {
	          if(v[i]!=nums[i])
	          {
	              swap(v[i],v[res[v[i]]]);
	           
	              count++;
	              i--;
	          }
	             
	     }
	     return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends