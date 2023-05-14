class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
          long long curr,next = 0,nextNext = 0;
    
    for(int i=N-1;i>=0;i--){
        curr = max(next,nextNext) + A[i];
        nextNext = next;
        next = curr;
    }
    
    return max(next,nextNext);

    }
};
