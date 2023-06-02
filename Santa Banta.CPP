class Solution{
    vector<int> primes;
    int n{1000001};
    int size{0};
public:
    void precompute(){
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
      
        for (int p = 2; p * p <= n; p++) {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true) {
                // Update all multiples of p greater than or
                // equal to the square of it numbers which are
                // multiple of p and are less than p^2 are
                // already been marked.
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
      
        // Print all prime numbers
        for (int p = 2; p <= n; p++){
            if (prime[p])
                primes.push_back(p);
        }
    }
    void dfs(vector<int> adj[], vector<int>& vis, int node){
        vis[node] = 1;
        
        for(const auto& x : adj[node]){
            if(!vis[x]){
                ++size;
                dfs(adj, vis, x);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        int i, j;
        ++n;
        vector<int> adj[n];
        for(i = 1;i<n;i++){
            int u = i;
           for(const auto& x : g[i]){
               int v = x;
               adj[u].push_back(v);
                adj[v].push_back(u);
           }
        }

        vector<int> vis(n, 0);
        int maxsize{0};
        for(i = 1;i<n;i++){
            if(!vis[i] && adj[i].size()){
                size = 1;
                dfs(adj, vis, i);
                maxsize = max(maxsize, size);
            }
        }
        
        if(maxsize == 0){
            return -1;
        }
        return primes[maxsize-1];
    }
};
