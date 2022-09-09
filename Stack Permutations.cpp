
class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        int i=0;int j=0;
        stack<int>stk;
        while(j<n){
            while(i<n&&a[i]!=b[j]){
                stk.push(a[i]);
                i++;
            }
            if(i==n){
                return 0;
            }
            stk.push(a[i]);
            while(stk.size()!=0&&stk.top()==b[j]){
                stk.pop();
                j++;
            }
            i++;
        }
        return 1;
    }
};

