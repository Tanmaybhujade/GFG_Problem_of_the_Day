class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
    long long res=0;

        int mini=INT_MAX;

        int count=0;

        for(int i=0;i<N;i++)

        {

            if(B[i]>1)

            {

               count+=B[i]/2;

               res+=2*((B[i]/2)*A[i]);

               mini=min(mini,A[i]);

            }

        }

        if(((count&1)))res-=2*mini;

        return res;

    }
};
