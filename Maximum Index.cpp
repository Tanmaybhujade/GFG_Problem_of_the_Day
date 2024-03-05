class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int b[n+1]={0};
       
        for(int i=n-1;i>=0;i--)
            b[i]=max(b[i+1],a[i]);
            
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            int ans=i, s=0,e=n-1,mid;
            while(s<=e)
            {
                mid=(s+e)/2;
                if(b[mid]>=a[i])
                {
                    ans=mid;
                    s=mid+1;
                }
                else
                    e=mid-1;
            }
            mx=max(mx,ans-i);
        }
        return mx;
    }
};
