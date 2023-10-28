
class Solution
{
public:
    int is_bleak(int n)
    {
        // Code here.
        int loop=__lg(n);
        for(int i=1;i<=loop;i++){
            int temp=n-i;
            int bits=__builtin_popcount(temp);
            if(bits==i){
                return 0;
            }
        }
        return 1;
    }
};
