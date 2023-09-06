class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int node,vector<int>adj[],stack<int>& topo,vector<int>& vis)
    {
        vis[node]=1;
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,topo,vis);
            }
        }
        
        topo.push(node);
    }
int findMotherVertex(int v, vector<int>adj[])
{
    stack<int> topo;
    vector<int> vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            dfs(i,adj,topo,vis);
        }
    }
    
    int node=topo.top();
    while(!topo.empty())
    {
        topo.pop();
    }
    vis.assign(v,0);
    
    dfs(node,adj,topo,vis);
    if(topo.size()==v)
    return node;
    else
    return -1;
}
 
};
