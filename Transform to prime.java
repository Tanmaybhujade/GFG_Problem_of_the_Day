
class Solution
{
    public int minNumber(int arr[], int N)
    {
        int sum = 0;
        for(int idx=0; idx<N; idx++) {
            sum+=arr[idx];
        }
        boolean[] isPrime = new boolean[1000001];
        Arrays.fill(isPrime, true);
        primeCheck(isPrime);
        for(int idx=sum;; idx++) {
            if(isPrime[idx]) {
                return idx-sum;
            }
        }
    }
    
    public void primeCheck(boolean[] isPrime) {
        int len = isPrime.length;
        isPrime[0]=false;
        isPrime[1]=false;
        for(int num=2; num*num<=len; num++) {
            for(int multiple=2*num; multiple<len; multiple+=num) {
                isPrime[multiple]=false;
            }
        }
    }
}
