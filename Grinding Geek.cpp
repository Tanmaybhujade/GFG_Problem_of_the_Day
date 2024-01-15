class Solution{
    public:
    int f(int ind, int total, vector<int>&cost, vector<vector<int>>&dp, int n)
    {
        if(ind==n || total==0)
            return 0;
        
        if(dp[ind][total] != -1)
            return dp[ind][total];
        
        int notTake = 0 + f(ind+1,total,cost,dp,n);
        int take = 0;
        if(cost[ind] <= total)
        {
            take = 1+f(ind+1,total-cost[ind]+floor(0.9*cost[ind]),cost,dp,n);
        }
        
        return dp[ind][total] = max(take, notTake);
    }
    
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<vector<int>>dp(n+1, vector<int>(total+1,-1));
        return f(0,total,cost, dp, n);
    }
};
