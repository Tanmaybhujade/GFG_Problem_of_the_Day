class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        vector<pair<int, int>> ar;
        for(int i = 0; i < N; i++) ar.push_back({B[i], A[i]});
        sort(ar.begin(), ar.end());
        
        int ans = 0;
        for(int i = N - 1; i >= 0; i--) {
            int cur = min(T, ar[i].second);
            ans += cur * ar[i].first;
            T -= cur;
        }
        
        return ans;
    }
};
