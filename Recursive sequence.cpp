
class Solution{
public:

    long long pro(int num,int cnt){
        int mod=1e9+7;
        long long res=1;
        for(int i=0; i<cnt; i++){
            res=(res*num)%mod;
            num++;
        }
        return res;
    }
    long long sequence(int n){
        // code here
        int mod=1e9+7;
        long long ans=0;
        int num=1;
        for(int i=1; i<=n; i++){
            ans=(ans+pro(num,i))%mod;
            num+=i;
        }
        return ans%mod;
    }
};
