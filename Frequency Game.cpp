
class Solution{
public:
    static bool cmp(pair<int,int>a, pair<int,int>b){
        if(a.first == b.first) return a.second>b.second;
        else return a.first<b.first;
    }

    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        vector<pair<int,int>>vp;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
            vp.push_back({it.second, it.first});
        }
        sort(vp.begin(),vp.end(),cmp);
        int ans = vp.begin()->second;
        return ans;
    }
};
