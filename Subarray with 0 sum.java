class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
           //Your code here
        set<int>st;
        st.insert(0);
        st.insert(arr[0]);
        
        for(int i=1;i<n;i++)
        {
            if(st.find(arr[i-1]+arr[i])==st.end())
            {
                arr[i]=arr[i-1]+arr[i];
                // cout<<arr[i]<<endl;
                st.insert(arr[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }


};
