class Solution
{
    public long[] smallerSum(int n,int arr[])
    {
    


     long sum[]=new long[n];
       
       long[] temp = new long[n];
        for(int i = 0;i < n;i++)
            temp[i] = arr[i];
            
              Arrays.sort(temp);

        sum[0]=temp[0];
       for(int i=1;i<n;i++){
          sum[i]=sum[i-1]+temp[i]; 
       }
       
       
       long ans[]=new long[n];
       
       for(int i=0;i<n;i++)
       {
           
           int ind=(int)f(temp,arr[i],n);
           if(ind!=0)
           ans[i]=sum[ind-1];
         
       }
       
       return ans;
       
    }
    
    long f(long sum[], int target, int n){
        
        
        int s=0;
        int e=n;
        
        long ans=0;
        
        
        
        while(s<e)
        {
            int mid=(s+e)/2;
            
            
            if(sum[mid]<target){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        
        
        return s;   
    }
}
