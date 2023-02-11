class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
         int i = N - 1;
        S[P[i]] = 'A' + S[P[i]] - 'a';
        i--;
        while(i >= 0){
            int index = P[i];
            char c = S[index] - 'a' + 'A';
            if(index > 0){
                if(S[index - 1] == c) return i + 1;
            }
            if(index < N - 1){
                if(S[index + 1] == c) return i + 1;
            }
            S[index] = c;
            i--;
        }
        return 0;
    }
};
