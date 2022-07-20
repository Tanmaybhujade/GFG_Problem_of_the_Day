class Solution{
    static int countMin(String str)
    {
         StringBuilder sb=new StringBuilder(str);
       sb.reverse();
       String s=sb.toString();
       int n=s.length();
       int m=str.length();
       int dp[][]=new int[n+1][m+1];
       for(int i=0;i<=m;i++)
       {
           Arrays.fill(dp[i],-1);
       }
       return n-lcs(str,s,n,m,dp);
   }
   static int lcs(String str,String s,int n,int m,int dp[][])
   {
       if(n == 0 || m==0)
       return 0;
       if(dp[n][m]!=-1)
       return dp[n][m];
       if(s.charAt(n-1) == str.charAt(m-1))
       {
           return dp[n][m]=1+lcs(str,s,n-1,m-1,dp);
       }
       else
       {
           return dp[n][m]=Math.max(lcs(str,s,n-1,m,dp),lcs(str,s,n,m-1,dp));
       }
    }
}
