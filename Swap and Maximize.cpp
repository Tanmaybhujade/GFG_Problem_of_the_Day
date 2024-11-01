

class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        vector<int>v;
        sort(arr.begin(), arr.end());
        int i=0, j=arr.size()-1, ok=1;
        while(i<=j){
            if(ok) v.push_back(arr[i++]), ok=0;
            else v.push_back(arr[j--]), ok=1;
        }
        long long sum=v.back()-v.front();
        for(int i=0;i<v.size()-1;i++){
            sum+=abs(v[i]-v[i+1]);
        }
        return sum;
        
    }
};
