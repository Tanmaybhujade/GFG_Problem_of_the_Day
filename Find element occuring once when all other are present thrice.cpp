
class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        sort(arr,arr+N);
        for(int i=0;i<N;i=i+3)
        {
            if( arr[i]!=arr[i+1]){
                return arr[i];
            }
        }
    }
};
