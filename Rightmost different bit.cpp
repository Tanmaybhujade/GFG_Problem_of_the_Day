
class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n) return -1;
        for(int i=0;i<max(m,n);i++){
            if((m&(1<<i)) != (n&(1<<i))) return i+1;
        }
        return -1;
    }
};



