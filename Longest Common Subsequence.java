class Solution
{
    //Function to find the length of longest common subsequence in two strings.
    static int lcs(int A, int B, String str1, String str2)
    {
        int[][] dp = new int[A + 1][B + 1]; 
        
        for (int i = 0; i <= A; i++) {
            for (int j = 0; j <= B; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                } else if (str1.charAt(i - 1) == str2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return dp[A][B];
    }
    
}
