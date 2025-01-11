
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        
        int n=s.size();
        vector<bool>check(26,0);
        int first=0;
        int second=0;
        int count=0;
        while (second<n){
            while (check[s[second]-'a']){
                check[s[first]-'a']=0;
                first++;
            }
            check[s[second]-'a']=1;
            count=max(count,second-first+1);
            second++;
            
        }
        return count;
    }
};
