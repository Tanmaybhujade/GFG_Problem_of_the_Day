
class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        unordered_set<string> set;
    
        for(int i=0;i<s1.size();++i){
               
               string t1;
               string t2=s1[i];
               int n=s1[i].size();
               
               for(int j=0;j<n;++j){
                   t1.push_back(s1[i][j]);
                   t2.erase(0,1);
                   set.insert(t1);
                   set.insert(t2);
               }
              
        }
        
        int res=0;
        
        for(int i=0;i<s2.size();++i){
            if(set.find(s2[i])!=set.end()){
               res++;
            }           
        }
        return res;
        
    }
};
