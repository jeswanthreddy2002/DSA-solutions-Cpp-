//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>res;
       queue<int>q;
       vector<int>visited(V+1,0);
      q.push(0);
      visited[0]=1;
       while(!q.empty())
       {  int top=q.front();
            q.pop();
          res.push_back(top);
     
           for(int i=0;i<adj[top].size();i++)
           {  if(!visited[adj[top][i]]==1)
           {   visited[adj[top][i]]=1;
               q.push(adj[top][i]);
           }
           }
          
           
       }
       return res;
       
       
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends