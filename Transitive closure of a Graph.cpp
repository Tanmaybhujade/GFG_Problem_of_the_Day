class Solution{
public:
    int n;
    void util(vector<vector<int>> &adj,vector<vector<int>> &res, int j, int i){
        
        res[i][j] = 1;
        
        for(int it = 0; it < adj[j].size(); it++){
            
            if(adj[j][it]==1 && res[i][it]==0) {
                util(adj, res, it, i);
            }
        }
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> arr)
    {
        n = N;
        
        vector<vector<int>> res(n, vector<int>(n, 0));

        for(int i=0; i<n; i++){
            util(arr, res, i, i);
        }

        return res;
    }
};
