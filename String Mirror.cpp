class Solution{
public:
    string stringMirror(string str){
        // Code here
        string res = "";
        res=res+str[0];
        for(int i=1;i<str.length();i++)
        {
           
            if(str[i]<str[i-1])
            res=res+str[i];
            else if(str[i]>str[i-1])
            break;
            else // str[i] == str[i-1]
            {
                if(str[i]==res[0])
                break;
                else
                res=res+str[i];
            }
        }
        string rev = res;
        reverse(res.begin(),res.end());
        
        string ans = rev+res;
        
        return ans;
    }
};
