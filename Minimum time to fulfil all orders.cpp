class Solution{
    public:
    bool isPossible(vector<int> &rank, int time, int donuts){
        int donutCreated=0;
        for(int i=0;i<rank.size();i++){
            int currTime=0;
            int number=1;
            while(currTime+number*rank[i]<=time){
                donutCreated++;
                currTime=currTime+number*rank[i];
                number++;
            }
            if(donutCreated>=donuts){
                return true;
            }
        }
        return false;
    }
    
    int findMinTime(int N, vector<int>&A, int L){
        int lowTime=1;
        int highTime=INT_MAX/2;
        int res=0;
        while(lowTime<=highTime){
            int avgTime=(highTime+lowTime)/2;
            if(isPossible(A,avgTime,N)==true){
                res=avgTime;
                highTime=avgTime-1;
            }
            else{
                lowTime=avgTime+1;
            }
        }
        return res;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int l;
	    cin >> l;
	    vector<int>arr(l);
	    for(int i = 0; i < l; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    int ans = ob.findMinTime(n, arr, l);
	    cout << ans <<endl;
	}
	return 0;
}

