class Solution {
  public:
    int minVal(int a, int b) {
        int setb = __builtin_popcount(b),k=0;
        bitset<32> bs(a),x;
        for(int i=31;i>=0;i--)    if(bs[i] && setb)   x[i]=1,setb--;
        while(setb>0)
        {
            if(x[k]==0)  x[k]=1,setb--;
            k++;
        }
        return x.to_ulong();
    
    }
};
