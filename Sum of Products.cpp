// User function template for C++



class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        vector<int> v(32, 0);
        long long ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 32 ; j++){
                 if(arr[i] & 1<< j){
                      ans+=v[j]*pow(2,j);
                      v[j]++;
                     
                 }
            }
        }
        return ans;
    }
};
