class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<int> vis(N,0);
        vector<int> ans(N,INT_MAX);
        
        // Creating adjecency list for 
        vector<pair<int,int>> adj[N];
        for(auto val : edges)
        {
            adj[val[0]].push_back({val[1],val[2]});
        }
        
        //  BFS Traaversal Directed Graph
        queue<pair<int,int>> que;
        que.push({0,0});
        ans[0]=0;
        while(!que.empty())
        {
            auto temp = que.front();
            que.pop();
            int node = temp.first;
            int dis = temp.second;
            for(int i=0;i<adj[node].size();i++)
            {
                int newnode = adj[node][i].first;
                int newdis  = adj[node][i].second;
                // if new distance is less than previous for perticular node then push newnode with new distance
                if(ans[newnode] > (dis+newdis))
                {
                    ans[newnode]=(dis+newdis);
                    que.push({newnode,(dis+newdis)});
                }
            }
        }
        
        // if node not reached set it as -1
        for(int i=0;i<N;i++) if(ans[i]==INT_MAX) ans[i]=-1;
        return ans;  
    }
};
