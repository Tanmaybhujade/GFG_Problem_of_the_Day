class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
     int i=0,j=0,sum=arr[0];
        vector<int> v;
        while(j<n){
            if(sum==s){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(sum<s) sum+=arr[++j];
            else{
                if(i<j){
                    sum-=arr[i];
                    i++;
                }
                else{
                    i++;
                    j++;
                    sum=arr[i];
                }
            }
        }
        v.push_back(-1);
        return v;
    }
};
