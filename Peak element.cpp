
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n==1){
           return 0;
       }
       if(n==2){
           if(arr[0]<=arr[1]){
               return 1;
           }
       }
       for(int i=1;i<=n-1;i++){
           if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1]){
               return i;
           }
       }
       return 0;
    }
};
