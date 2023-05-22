class Solution{
    public static int solve(int N, int[] p) {
        int g[]  = new int[N + 1];
        for (int i = 1; i < N; i++) {
            g[p[i]]++;
            g[i]++;
        }
        
        int cont = 0;
        for (int i = 0; i < N; i++) {
            if (g[i] == 1)
                cont++;
        }
        return Math.max(N - cont -1,0);
}
}    
