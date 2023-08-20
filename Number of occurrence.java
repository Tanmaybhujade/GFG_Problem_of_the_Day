
class Solution {
    int count(int[] arr, int n, int x) {
        // code here
        int count = 0;
        for(int y : arr)
        {
            if(y==x)
            count++;
        }
        return count;
    }
}
