



class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        if (k == 0) return q;
        vector<int>arr;
        queue<int> answer;
        int m = k;
        while (!q.empty() && k > 0){
            arr.push_back(q.front());
            q.pop();
            k--;
        }
        reverse(arr.begin(),arr.end());
        for (int i = 0; i < arr.size(); i++){
            answer.push(arr[i]);
        }
        while (!q.empty()){
            answer.push(q.front());
            q.pop();
        }
        return answer;
    }
};
