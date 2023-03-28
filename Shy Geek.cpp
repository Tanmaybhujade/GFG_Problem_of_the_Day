class Solution{
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
   long long find(int n, long k){
        
        if(k<=0)return 0LL;
        int low = 0, high = n-1, ans = -1;
        
        while(low<=high){
            int mid = low+(high-low)/2, price = shop.get(mid);
            if(price>k)high = mid-1;
            else{
                ans = price;
                low = mid+1;
            }
        }
        if(ans == -1)return 0;

        return k/ans+find(high,k%ans);
        
    }

};
