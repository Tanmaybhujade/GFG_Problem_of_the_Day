class Solution{
public:
void help(vector<string>&ans,string s,string ch,int i){
    if(i==s.length()){
        if(ch!=""){
        ans.push_back(ch);
        }
        return;
        
        }
      help(ans,s,ch,i+1);
     help(ans,s,ch+s[i],i+1);
 
}
vector<string> AllPossibleStrings(string s){
   vector<string>ans;
   help(ans,s,"",0);
   sort (ans.begin(),ans.end());
    return ans;
    
 }
};
