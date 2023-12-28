

class Solution{
    public:
    int getmatch(string &wild, string &pattern, int i, int j, vector<vector<int>>& dp){
        if(i == -1 || j == -1){
            return i == -1 && j == -1;
        }
        else if(dp[i][j] != -1){
            return dp[i][j];
        }
        else{
            int ans = 0;
            if(wild[i] == '*'){
                ans = ans | getmatch(wild, pattern, i, j-1, dp) | getmatch(wild, pattern, i-1, j-1, dp);
            }
            else if((wild[i] == '?') || (wild[i] == pattern[j])){
                ans  = ans | getmatch(wild, pattern, i-1, j-1, dp);
            }
            return dp[i][j] = ans;
        }
    }
    bool match(string wild, string pattern)
    {
        // code here
        int n = wild.size(),m = pattern.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return getmatch(wild, pattern, n-1, m-1, dp);
    }
};
