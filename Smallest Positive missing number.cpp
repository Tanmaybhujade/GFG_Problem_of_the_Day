class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        map<int,int> mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }
        
        int j=1;
        while(mpp.find(j) != mpp.end()){
            j++;
        }
        return j;
    } 
};
