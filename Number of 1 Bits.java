class Solution {
    static int setBits(int N) {
        // code here
         int count = 0;
        while (N != 0) {
            count += (N & 1);
            N >>= 1;
        }
        return count;
    }
}
