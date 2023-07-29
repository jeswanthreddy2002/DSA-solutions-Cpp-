//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    //Function to detect cycle in an undirected graph.
    bool rec(vector<int>adj[],int visited[],int r,int par)
    {  
        for(auto it:adj[r])
        {
            if(!visited[it])
            {  
                visited[it]=1;
                if( rec(adj,visited,it,r))
            {
                return true;
            }
                
            }
          else if(par!=it)
          {
              return true;
          }
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int visited[V]={0};
        for(int i=0;i<V;i++)
        {  if(!visited[i])
        { visited[i]=1;
         if (rec(adj,visited,i,-1))
         {
          return true;   
         }
        }
        }
        return false;
    }
};
    // bool ans(int i,int V, vector<int> adj[],int visited[])
    // {
    //     queue<pair<int,int>>q;
    //     q.push({i,-1});
    //     visited[i]=1;
        
    //     while(!q.empty())
    //     {
    //         pair<int,int> st=q.front();
    //         q.pop();
    //         for(auto it:adj[st.first])
    //         {
    //             if(!visited[it])
    //             { visited[it]=1;
    //                 q.push({it,st.first});
    //             }
    //             else if(st.second!=it){
    //                 return true;
    //             }
                
    //         }
    //     }
        
        
    //     return false;
    // }
    // bool isCycle(int V, vector<int> adj[]) {
    //     // Code here
    //     int visited[V]={0};
    //     for(int i=0;i<V;i++)
    //     { if(!visited[i])
    //     {
    //         if(ans(i,V,adj,visited))
    //         {
    //             return true;
    //         }
    //     }
    //     }
    //     return false;
        
    // }
//};

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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends