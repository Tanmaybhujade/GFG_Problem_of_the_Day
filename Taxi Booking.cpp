class Solution{
public:
int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int maxi=INT_MAX;
        for(int i=0;i<N;i++){
            int res=abs(pos[i]-cur);
        if(maxi>res*time[i])
          maxi=res*time[i];
        }
        return maxi;
    }
};
