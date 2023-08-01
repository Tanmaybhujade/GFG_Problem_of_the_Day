class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>ans;
    void dfs(vector<int>adj[],int s,bool visited[]){
        visited[s]=true;
        ans.push_back(s);
        for(int u:adj[s]){
            if(visited[u]==false)
                dfs(adj,u,visited);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
        for(int i=0;i<V;i++)
            visited[i]=false;
        for(int i=0;i<V;i++){
            if(visited[i]==false){
                dfs(adj,i,visited);
            }
        }
        return ans;
        
    }
};
