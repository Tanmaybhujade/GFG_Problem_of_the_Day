class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum;
        for(int i=1;i<=sqrt(N);i++)
        {
            sum=0;
           sum= pow(2,i)*(pow(2,i+1)-1);
           if(sum==N)
            return 1;
        }
            return 0;
    }
};
