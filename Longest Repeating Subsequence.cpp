

class Solution {
public:
int LongestRepeatingSubsequence(string str){
    int n=str.size();
    int ar[n+1][n+1];
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            if(i == 0 || j == 0){
                ar[i][j]=0;
            }
            else if(str[i-1]==str[j-1] && i != j){
                ar[i][j]=1+ar[i-1][j-1];
            }
            else{
                ar[i][j]=max(ar[i][j-1],ar[i-1][j]);
            }
        }
    }
    return ar[n][n];
}
 
 
};
