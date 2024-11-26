
class Solution {

    // a: input array
    // n: size of array
    // Function to find maximum circular subarray sum.
    public int circularSubarraySum(int arr[]) {

       int n=arr.length;
       int totalsum=0;
       int maxsofar=0;
       int minsofar=0;
       int maxsum=Integer.MIN_VALUE;
       int minsum=Integer.MAX_VALUE;
       for(int num:arr){
           totalsum+=num;
           maxsofar+=num;
           minsofar+=num;
           maxsum=Math.max(maxsofar,maxsum);
           minsum=Math.min(minsofar,minsum);
           if(maxsofar<0){
               maxsofar=0;
           }
           if(minsofar>0){
               minsofar=0;
           }
           
       }
       return Math.max(totalsum-minsum,maxsum);
    }
}
