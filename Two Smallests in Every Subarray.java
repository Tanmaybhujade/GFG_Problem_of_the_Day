
class Solution {
    public int pairWithMaxSum(int[] arr) {
        // code here
        if(arr.length==1){
            return -1;
        }
        int s=0,c=0;
        for(int i=0;i<arr.length-1;i++){
            c=arr[i]+arr[i+1];
                s=Math.max(s,c);
            
        }return s;
    }
}
