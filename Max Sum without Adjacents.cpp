class Solution{

public: 

 int findMaxSum(int *arr, int n) {

     if(n==1) return arr[0];

     int prev2 = arr[0];

     int prev = max(arr[0],arr[1]);

     int curr = prev;

     for(int i =2;i<n;i++){

        curr= max(prev2+arr[i],prev);

        prev2= prev;

        prev = curr;

     }

     return prev;

 }

}; 
