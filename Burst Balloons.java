class Solution {
    
  public static int maxCoins(int N, int[] arr) {
      
    return f(arr,0,N-1,new Integer[N][N]);
  }
  
  public static int f(int[] a,int i,int j,Integer[][] dp) {
      if(i>j) return 0;
      
      if(dp[i][j]!=null) return dp[i][j];
      
      int l1 = (i-1>=0 ? a[i-1]:1); 
      int r1 = (j+1<a.length ? a[j+1]:1);
      int ans=0;
      for(int k=i;k<=j;k++) {
          int left = f(a,i,k-1,dp);
          int right = f(a,k+1,j,dp);
          
          int coin = left+right+l1*a[k]*r1;
          
          ans = Math.max(ans,coin);
      }
      return dp[i][j]=ans;
  }
  
}
     
