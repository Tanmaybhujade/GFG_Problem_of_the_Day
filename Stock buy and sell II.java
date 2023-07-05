class Solution {
    public static int stockBuyAndSell(int n, int[] prices) {
        // code here
        int max=0;
        for(int i=0;i<n-1;i++){
            max+=((prices[i+1]-prices[i])>0)? prices[i+1]-prices[i] :0; 
        }
        return max;
    }
}
