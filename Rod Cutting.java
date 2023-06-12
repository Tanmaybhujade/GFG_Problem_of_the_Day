class Solution{
    public int cutRod(int price[], int totRod) {
        //code here
         int n = price.length;
         int length[]= new int[totRod];
         for(int i=0;i<totRod;i++){
             length[i]=i+1;
         }
         
         int dp[][]= new int[n+1][totRod+1];
         for(int i=1;i<n+1;i++){
             for(int j=1;j<totRod+1;j++){
                 if(length[i-1]<=j){
                     //valid condition
                     dp[i][j]= Math.max(price[i-1]+dp[i][j-length[i-1]] , dp[i-1][j]);
                 }else{
                     dp[i][j]=dp[i-1][j];
                 }
             }
         }
         return dp[n][totRod];
    }
}
