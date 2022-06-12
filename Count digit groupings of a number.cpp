class Solution{
	public:
	int TotalCount(string str){
	     int n = str.length();
        int presum[105] = {0};n = str.length();
	    for(int i=1;i<=n;i++)    presum[i] = presum[i-1] + (str[i-1]-'0');
	    
	    vector<vector<int>> dp(n+1, vector<int>(presum[n]+1, 0));
	    //base case
	    for(int prev=0;prev<=presum[n];prev++)    dp[n][prev] = 1;
	    
	    for(int ind=n-1;ind>=0;ind--){
	        for(int prev=presum[n]; prev >= 0;prev--){
	            
	            //just copying the recurrence
	            int res = 0;
	            for(int k=ind; k < n;k++){
	                int sum = presum[k+1] - presum[ind];
	                if(sum >= prev)     res += dp[k+1][sum];
	            }
	            dp[ind][prev] = res;
	        }
	    }
	    
	    return dp[0][0];

	}

};
