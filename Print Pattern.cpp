



class Solution{
public:
    vector<int> pattern(int N){
        if(N <= 0) return {N};
        vector<int> ans;
        int temp = N;
        ans.push_back(temp);
        temp -= 5;
        bool sub = true;
        bool add = false;
        while(temp <= N) {
            ans.push_back(temp);
            if(temp <= 0) {
                sub = false;
                add = true;
            }
            if(add) temp += 5;
            if(sub) temp -= 5;
        }
        return ans;
    }
};
