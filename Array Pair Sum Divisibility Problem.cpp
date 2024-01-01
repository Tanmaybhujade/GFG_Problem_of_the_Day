
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        if(nums.size()%2!=0)
        return false;
        
        unordered_set<int> s;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%k==0)
            count++;
            else
            {
                int rem=nums[i]%k;
                if(s.find(k-rem)==s.end())
                {
                    s.insert(rem);
                }
                else
                {
                    s.erase(k-rem);
                }
            }
        }
        return s.size()==0 && count%2==0;
      
        
    }
};
