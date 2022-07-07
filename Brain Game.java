class Solution
{
    public boolean brainGame(int[] nums)
    {
          int a[] = new int[1005];
       for(int i = 2; i<= 1000; i++){
     for(int j = 2*i; j <= 1000; j+=i)
      a[j] = Math.max(a[j], 1 + a[i]);
    }
    int x = 0;
    for(int i = 0; i < nums.length; i++){
     x = x ^ a[nums[i]];
    }
    if(x == 0)
     return false;
    return true;
   }
}
