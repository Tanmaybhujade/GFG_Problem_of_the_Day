

class Solution {
public:
    int sumOfPowers(int a, int b){
        // Code here
          vector<int> prime(b + 1, -1);
        for(int i=2; i<=b; i++)
        {
            if(prime[i] == -1)
            {
                for(int j=i; j<=b; j+=i)
                    prime[j] = i;
            }
        }
        
        int ans = 0;
        for(int i=a; i<=b; i++)
        {
            int val = i;
            while(val != 1)
            {
                val /= prime[val];
                ans++;
            }
        }
        return ans;
    }
};
