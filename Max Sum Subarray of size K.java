


class Solution{
    static long maximumSumSubarray(int K, ArrayList<Integer> Arr,int N){
        long maxSum = 0l;
        Deque<Integer> dq = new ArrayDeque<>();
        long tempSum = 0l;
        for(int i = 0; i < N; i += 1) {
            if(dq.isEmpty()) {
                dq.addLast(Arr.get(i));
                tempSum += Arr.get(i);
            } else {
                if(dq.size() < K) {
                    dq.addLast(Arr.get(i));
                    tempSum += Arr.get(i);
                } else {
                    tempSum -= dq.remove();
                    dq.addLast(Arr.get(i));
                    tempSum += Arr.get(i);
                }
            }
            maxSum = Math.max(maxSum, tempSum);
        }
        return maxSum;
    }
}
