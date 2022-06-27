class Solution {
  public:
    vector<int> changeBits(int N) {
     int i=0,n=N,bin=0;

       while(n!=0){
           n=n/2;
           i++;
           bin+=pow(2,i-1);
       }
       return {bin-N , bin};
    }
};
