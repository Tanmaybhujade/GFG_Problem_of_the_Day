
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int i=0;
        vector<int> res(2,-1);
        for(i=0;i<n;i++)
            if(arr[i] == x)
                break;
        if(i == n)
            return res;
        res[0] = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
                i++;
            else
                break;
        }
        res[1] = i;
        return res;
    }
};
