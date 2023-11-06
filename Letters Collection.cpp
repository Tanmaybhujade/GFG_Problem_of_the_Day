class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for(int i=0;i<q;i++){
            int hops=queries[i][0];
            int row=queries[i][1],col=queries[i][2];
            int sum=0;
            for(int k=-2;k<=2;k++){
                for(int l=-2;l<=2;l++){
                    if(max(abs(k),abs(l))==hops){
                        int nrow=row+k,ncol=col+l;
                        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m)sum+=mat[nrow][ncol];
                    }
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
