class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long res = 0;
        for(int i=0;i<N;i++){
            res+=abs(A[i] - B[i]);
        }
        return res;
    }
};
