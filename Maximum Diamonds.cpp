class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
          priority_queue<int> maxheap;
        for(int i=0;i<N;i++){
           maxheap.push(A[i]);
        }
        long long sum=0;
        while(K--){
            int top=maxheap.top();
            sum+=top;
            maxheap.pop();
            maxheap.push(top/2);
        }
        return sum;
    }
};
