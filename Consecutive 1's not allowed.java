class Solution {
    private static final int MODULO = 1000000007;
    
    long countStrings(int n) {
        long count = 2;
        long endWithZero = 1;
        long endWithOne = 1;
        for (int i = 1; i < n; i++) {
            endWithOne = endWithZero;
            endWithZero = count;
            count = (endWithOne + endWithZero) % MODULO;
        }
        return count;
  }
}
