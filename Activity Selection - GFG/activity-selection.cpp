//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class structure{
    public:
    int st;
    int end;
};
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    bool static activitycompare(structure c1,structure c2)
    {
       return c1.end<c2.end;
       
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {   structure c[n];
     
        for(int i=0;i<start.size();i++)
        {
            c[i].st=start[i];
            c[i].end=end[i];
        }
       sort(c,c+n,activitycompare);
       //cout<<c[2].st;
        int  count=0;
       if(c[0].st<=c[0].end)
       {
       count++;
       }
       if(n>1)
       {
       int j=0;
       for(int i=1;i<n;i++)
       {  //cout<<c[i].st<<" "<<c[j].end<<endl;
           if(c[i].st>c[j].end)
           { //cout<<count;
               count++;
               j=i;
           }
           
           
       }
      }
       return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends