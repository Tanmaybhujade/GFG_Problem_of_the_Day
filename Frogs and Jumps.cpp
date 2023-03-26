class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        unordered_map<int,int> vis;
        
        for(int i=0;i<N;i++){
            int x=frogs[i];
            
           if(vis[x]==0){
               int j=x;
                while(j<=leaves){
                vis[j]++;
                j=j+x;;
            }
           }
        }
        int count=0;
        for(int i=1;i<=leaves;i++){
            if(vis[i]==0) count++;
        }
        return count++;
    }
};
