class Solution {
    public static ArrayList<Integer> solveQueries(int N, int num, int[] arr, int[][] Q) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        HashMap<Integer,HashMap<Integer,Integer>> hm = new HashMap<>();
        for(int i=0;i<N;i++){
            HashMap<Integer,Integer> temp = new HashMap<>();
            for(int j=i;j<N;j++){
                temp.put(arr[j],temp.getOrDefault(arr[j],0)+1);
            }
            hm.put(i,temp);
        }
        for(int i=0;i<Q.length;i++){
            int L = Q[i][0];
            int R = Q[i][1];
            int K = Q[i][2];
            int count = 0;
            for(int j=L;j<=R;j++){
                if(hm.get(j).get(arr[j]) == K){
                    count++;
                }
            }
            ans.add(count);
        }
        return ans;
    }
}
