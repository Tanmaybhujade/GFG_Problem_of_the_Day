

class Solution{
public:
    static bool comp(const vector<int> &v1, const vector<int> &v2){
        // If finish time is same, place the first occuring first
        if(v1[1]==v2[1]){
                return v1[2]<v2[2];
        }
        // sort on the increasing finish time
        return v1[1]<v2[1];
    }
    vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F){
        vector<vector<int>> arr;
        for(int i=0; i<n; ++i){
            arr.push_back({S[i], F[i], i});
        }
        sort(arr.begin(), arr.end(), comp);
        vector<int> ans;
        for(int i=0; i<n; ++i){
            // If either no element in the array or
            // start time of current element is greatr than finish time of last taken element
            // -1 and +1 to maintain the 1-based indexing
            if(i==0 || arr[i][0]>F[ans.back()-1]){
                ans.push_back(arr[i][2]+1);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
