
class Solution {
private:
    vector<int> cnt;
    int ans = 0;
    void DFS(int node,int par,vector<int> adj[]){
        for(const int & adjNode:adj[node]){
            if(adjNode == par) continue;
            DFS(adjNode,node,adj);
            cnt[node] += cnt[adjNode];
            if(cnt[adjNode]%2==0) ans++;
        }
    }
public:
    int minimumEdgeRemove(int n, vector<vector<int>>edges){
        cnt.resize(n,1);
        vector<int> adj[n];
        for(const auto & edge : edges ){
            adj[edge[0]-1].push_back(edge[1]-1);
            adj[edge[1]-1].push_back(edge[0]-1);
        }
        DFS(0,-1,adj);
        return ans;
    }
};
