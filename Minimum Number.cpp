class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){

        if(n==1||n==2)return arr[0];
        return 1;
    }
};
