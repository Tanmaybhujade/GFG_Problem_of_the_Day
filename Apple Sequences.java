class Solution{
    public static int appleSequence(int n, int m, String arr){
         int i=0,j=0,o=0,ans=0;
        while(j<n) {
            if(arr.charAt(j)=='O') {
                if(o<m) {
                    o++;
                    j++;
                } else {
                    if(arr.charAt(i)=='O') o--;
                    i++;
                }
            } else {
                j++;
            }
            ans = Math.max(ans,j-i);
        }
        return ans;
    }
}
