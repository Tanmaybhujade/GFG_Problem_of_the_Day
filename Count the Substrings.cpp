class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
     int ans=0;
        for(int i=0;i<S.length();i++) {
            int l=0,u=0;
            for(int j=i;j<S.length();j++) {
                if(S[j]>='A' && S[j]<='Z') {
                    u++;
                } else {
                    l++;
                }
                if(l==u) ans++;
            }
        }
        return ans;
    }
};
