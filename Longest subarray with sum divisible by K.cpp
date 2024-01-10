class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int, int> mp;
	    int sum = 0;
	    int ans = 0;
	    mp[0] = 0;
	    for(int i = 0; i < n; i++)
	    {
	       sum += arr[i];
	       int rem = sum % k;
	       rem = (rem + k) % k;
	       if(mp.find(rem) != mp.end())
	       {
	           ans = max(ans, i - mp[rem] + 1);
	       }
	       else 
	        mp[rem] = i + 1;
	    }
	    return ans;
	}
};
