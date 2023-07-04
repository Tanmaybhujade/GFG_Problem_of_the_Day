class Solution {
    
    public int countSubArrayProductLessThanK(long a[], int n, long k)
    {
        int count=0;
        long product=1;
        int windowsize=0;

        for(int idx=0; idx<n; idx++){
            product*=a[idx];
            windowsize++;
            if(product<k){
                count+=windowsize;
            }else{
                while(product>=k && windowsize>0){
                    windowsize--;
                    product/=a[idx-windowsize];
                }
                if(product<k){
                    count+=windowsize;
                }
            }
        }
        return count;
    }
}
