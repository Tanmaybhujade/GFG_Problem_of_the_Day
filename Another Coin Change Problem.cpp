class Solution {
  public:
    bool f(int ind,int k,int target,vector<int> &coins,vector<vector<vector<int>>> &dp)
    {
        if(target==0) return k==0;
        if(k==0) return false;
        if(ind==0) return target%coins[ind]==0&&(target/coins[ind])==k;
        if(dp[ind][k][target]!=-1) return dp[ind][k][target];
        if(target>=coins[ind]) if(f(ind,k-1,target-coins[ind],coins,dp)) return dp[ind][k][target]=true;
        return dp[ind][k][target] = f(ind-1,k,target,coins,dp);
    }
    bool makeChanges(int n, int k, int target, vector<int> &coins) {
        sort(coins.begin(),coins.end());
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(k+1,vector<int>(target+1,-1)));
        return f(n-1,k,target,coins,dp);
    }
};
