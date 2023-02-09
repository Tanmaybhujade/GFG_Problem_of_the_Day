class Solution
{
    public int maximumMatch(int[][] G) {
        int m = G.length;
        int n = G[0].length;
        int[] match = new int[n];
        int result = 0;
        
        Arrays.fill(match, -1);

        for (int u = 0; u < m; u++) {
          boolean[] vis = new boolean[n];
          if (bfs(u, G, match, vis)) result++;
        }
        return result;
    }

    private static boolean bfs(int u, int[][] g, int[] match, boolean[] vis) {
        for (int v = 0; v < g[0].length; v++) {
            if (g[u][v] == 1 && !vis[v]) {
                vis[v] = true;
                if (match[v] == -1 || bfs(match[v], g, match, vis)) {
                  match[v] = u;
                  return true;
                }
            }
        }
        return false;
    }

}
