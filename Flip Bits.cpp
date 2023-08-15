class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int ones = 0;
        int curr = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
          if(a[i] == 0){
              curr++;
              maxi = max(maxi,curr);
          }
          else{
              ones++;
              curr--;
              if(curr<0)
                curr = 0;
          }
        }
        
        
        return maxi+ones;
    }
};
