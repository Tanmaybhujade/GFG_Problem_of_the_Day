class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int count=0;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            if(a>=k)return count;
            int b=pq.top();
            pq.pop();
            pq.push(a+b);
            count++;
        }
        return count;
    }
};
