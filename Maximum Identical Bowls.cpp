
class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long sum =0 ;
        for(int i=0 ; i<N ; i++){
            sum += arr[i] ;
        } 
        for(int i=N ; i>0 ; i--){
            if(sum%i==0){
                return i ;
            }}}
};
