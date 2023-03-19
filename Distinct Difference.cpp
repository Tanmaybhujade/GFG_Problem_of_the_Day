class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        set<int>s;
        vector<int>left;
        vector<int>right;
        for(auto i:A){
            left.push_back(s.size());
            s.insert(i);
        }
        s.clear();//use the same set for right side also
        for(int i=N-1;i>=0;i--){
            right.push_back(s.size()); //don't use //right.insert(right.begin(),s.size()) It will give TLE
            s.insert(A[i]);
        }
        reverse(right.begin(),right.end());//reverse the right vector
        for(int i=0;i<N;i++){
            left[i]-=right[i]; //left can be used to modify
        }
        return left;
    }
};
