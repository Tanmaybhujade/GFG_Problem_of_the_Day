class Solution{
public:
    int maxInstance(string s){
        
      vector<int> ch(26);
        for(int i=0;i<s.size();i++) ch[s[i]-'a']++;
        return min({ch[1], ch[0], ch[11]/2, ch[14]/2 ,ch[13]});
    }
};
y
 n

