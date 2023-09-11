
class Solution{
public:
    bool ils(int n, int i){
        if(n<i)return true;
        if(n%i==0)return false;
        return ils(n-n/i,i+1);
    }
    bool isLucky(int n) {
        // code here
        return ils(n,2);
    }
};
