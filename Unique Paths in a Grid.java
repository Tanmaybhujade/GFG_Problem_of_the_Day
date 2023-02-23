class Solution {
    static int uniquePaths(int n, int m, int[][] grid) {
        // code here
        int dp[][] = new int[n][m];
        //fill the array with -1
        for(int[] num : dp){
            Arrays.fill(num,-1);
        }
        
        return solve(0,0,n,m,grid,dp);
        
    }
    static int solve(int i,int j,int n,int m,int grid[][],int dp[][]){
        //base cases
        if(i>=n || j>=m || grid[i][j]==0){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        //move down
        int down = solve(i+1,j,n,m,grid,dp);
        //move right
        int right = solve(i,j+1,n,m,grid,dp);
        
        return dp[i][j] = (down+right)%1000000007;
    }
};
