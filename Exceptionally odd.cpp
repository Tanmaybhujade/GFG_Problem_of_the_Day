
class Solution {
    int getOddOccurrence(int[] arr, int n) {
                return Arrays.stream(arr).reduce(0,(a,b)->a^b);

    }
}
