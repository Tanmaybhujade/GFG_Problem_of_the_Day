

class Solution {
  public:
    int smallestSubstring(string S) {
        int n = S.length();
        int min_length = INT_MAX;
        
        int i = 0, j = 0;
        while(j < n) {
            while(i < n-1 && S[i] == S[i+1]) i++;
            
            j = i+1;
            
            while(j < n-1 && S[j] == S[j+1]) j++;
            
            if((j+1 < n) && (S[j+1] != S[j] && S[j+1] != S[i])) {
                min_length = min(min_length, j-i+2);
            }
            
            i = j;
        }
        
        return (min_length == INT_MAX) ? -1 : min_length;
    }
};
