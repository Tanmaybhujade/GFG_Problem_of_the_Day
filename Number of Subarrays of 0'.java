class Solution{
    long no_of_subarrays(int N, int [] arr) {
        //Write your code here
        long c=0,ans=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0)
                c++;
            else
            {
                ans+=(c*(c+1))/2;
                c=0;
            }
        }
        if(c!=0)
            ans+=(c*(c+1))/2;
        return ans;
    }
}
