class Solution {
    // Function to find three numbers such that arr[smaller[i]] < arr[i] <
    // arr[greater[i]]
    public List<Integer> find3Numbers(int[] arr) {
        // code here
        int n = arr.length;
        int[] leftMin = new int[n];
        int[] rightMax = new int[n];
        
        leftMin[0] = Integer.MAX_VALUE;
        rightMax[n-1] = Integer.MIN_VALUE;
        
        for(int i=1; i<n; i++){
            leftMin[i] = Math.min(arr[i-1], leftMin[i-1]);
        }
        
        for(int i=n-2; i>=0; i--){
            rightMax[i] = Math.max(arr[i+1], rightMax[i+1]);
        }
        
        List<Integer> ans = new ArrayList<>();
        
        for(int i=1; i<n-1; i++){
            if(leftMin[i] < arr[i] && arr[i] < rightMax[i]){
                ans.add(leftMin[i]);
                ans.add(arr[i]);
                ans.add(rightMax[i]);
                break;
            }
        }
        
        return ans;
    }
    
}
