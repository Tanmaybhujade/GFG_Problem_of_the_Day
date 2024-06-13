
class Solution
{
  public int padovanSequence(int n)
    {
        if(n==0 || n==1 ||n==2) return 1;
        //It is clear that the sum of nth number is sum of (n-1)th number and (n-2)th number
        //So the aim is get the two numbers
        int nth_Number = 1;
        int n_Minus_Oneth_Number = 1;
        int n_Minus_twoth_Number = 1;
        int result = 0;
        for(int i = 3; i<=n; i++)
        {
            result = (n_Minus_Oneth_Number + n_Minus_twoth_Number)%1000000007;
            n_Minus_twoth_Number = n_Minus_Oneth_Number;
            n_Minus_Oneth_Number = nth_Number;
            nth_Number = result;
        }
        
        return result;
    }
    
}
