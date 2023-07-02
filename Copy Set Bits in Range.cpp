class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        if(l>r){
            return x;
        }
        int number=0;
        for(int i=l;i<=r;i++){
            if(y&(1<<i-1)){
                number=number+pow(2,i-1);
            }
        }
        return x|number;
    }
};
