//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void solve(int node,vector<int>&dfs,int visited[],vector<int> adj[])
    {
        if(visited[node]==1)
        {
            return ;
        }
        visited[node]=1;
        dfs.push_back(node);
        for(auto it:adj[node])
        {  if(!visited[it]==1)
            {
            solve(it,dfs,visited,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>dfs;
        int visited[V]={0};
        solve(0,dfs,visited,adj);
        return dfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends