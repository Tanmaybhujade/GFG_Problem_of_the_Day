class Solution {
    void pushZerosToEnd(int[] arr, int n) {
        // code here
        int j=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[j]==0){
                if(arr[i]!=0)
                {
                    int t= arr[i];
                    arr[i]= arr[j];
                    arr[j]=t;
                    j++;
                }
            }else{
                j++;
            }
        }
    }
}
