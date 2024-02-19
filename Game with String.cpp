class Solution{
public:
    
    typedef pair<int,char>P;

    int minValue(string s, int k){
        // code here
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            m[ch]++;
        }
        
        priority_queue<P,vector<P>>pq;
        
        for(auto it=m.begin(); it!=m.end();it++){
            pq.push({it->second,it->first});
        }
        
        while(k){
            int num=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            num--;
            pq.push({num,ch});
            k--;
        }
        
        int ans=0;
        while(!pq.empty()){
           int num=pq.top().first;
           pq.pop();
           ans+=num*num;
        }
        return ans;
    }
};
