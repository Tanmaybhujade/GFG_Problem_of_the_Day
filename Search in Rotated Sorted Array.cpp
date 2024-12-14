

class Solution {
  public:
    int search(vector<int>& arr, int target) {
        // complete the function here
        
        int n = arr.size();
        int lo = 0,hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            
            if(arr[mid]==target) return mid;
            if(arr[lo]<=arr[mid]){  // Left half is sorted
                if(target >= arr[lo] && target < arr[mid]) hi = mid-1;  // Target lies in the left half
                else lo = mid+1; // Target lies in the right half
            }
            
            else { // Right half is sorted
                if(target <= arr[hi] && target > arr[mid]) lo = mid+1; // Target lies in the right half
                else hi = mid-1;  // Target lies in the left half
            }
        }
        return -1;
    }
};
