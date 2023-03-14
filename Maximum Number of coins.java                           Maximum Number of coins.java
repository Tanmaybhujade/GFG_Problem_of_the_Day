class Solution {
    int[][] dp = new int[405][405];

    int max_earn(Vector<Integer> a, int l, int r) {
        if (l > r)
            return 0;
        int ans = Integer.MIN_VALUE;
        if (dp[l][r] != -1)
            return dp[l][r];
        for (int k = l; k <= r; k++) {
            ans = Math.max(ans,
                    max_earn(a, l, k - 1) + max_earn(a, k + 1, r) + a.get(k) * (l - 1 >= 0 ? a.get(l - 1) : 1)
                            * (r + 1 < a.size() ? a.get(r + 1) : 1));
        }
        return dp[l][r] = ans;
    }

    public int maxCoins(int N, ArrayList<Integer> a) {
    // convert the ArrayList to a Vector
    Vector<Integer> vec = new Vector<>(a);
    Arrays.stream(dp).forEach(row -> Arrays.fill(row, -1));
    return max_earn(vec, 0, vec.size() - 1);
    }
}
