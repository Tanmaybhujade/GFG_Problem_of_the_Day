class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        
        
        //bfs
        
        vector<vector<int>> dis(N,vector<int> (M,1e9));
        
        queue<pair<int,int>> q;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j]=='X')
                {
                    q.push({i,j});
                dis[i][j]=0;
                }
                
            }
        }
        
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        int ans=INT_MAX;
        while(!q.empty())
        {
            auto nd=q.front();
            q.pop();
            
            int r=nd.first;
            int c=nd.second;
            
            if(grid[r][c]=='Y')
                ans=min(ans,dis[r][c]);
                
            
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                
                if(nr>=0 && nr<N && nc>=0 && nc<M && grid[nr][nc]!='X')
                {
                    int d=abs(nr-r)+abs(nc-c)+dis[r][c];
                    if(dis[nr][nc]>d)
                    {
                        dis[nr][nc]=d;
                         q.push({nr,nc});
                    }
                   
                }
                
            }
            
            
        }
        return ans;
        
    }
};
