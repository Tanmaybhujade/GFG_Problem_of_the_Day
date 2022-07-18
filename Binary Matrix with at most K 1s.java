class Solution {
    static ArrayList<Integer> largestSquare(ArrayList<ArrayList<Integer>> M, int R, int C, int K, int Q, int[] q_i, int[] q_j) {
        int countDP[][] = new int[R][C]; 
        for(int i = 0; i < R; i++)
            for(int j = 0; j < C; j++)
                countDP[i][j] = 0; 
     
        // Precomputation of the countDP 
        // prefix sum of the matrix 
        countDP[0][0] = M.get(0).get(0); 
         
        for(int i = 1; i < R; i++) 
            countDP[i][0] = countDP[i - 1][0] + 
                                 M.get(i).get(0); 
         
        for(int j = 1; j < C; j++) 
            countDP[0][j] = countDP[0][j - 1] + 
                             M.get(0).get(j); 
         
        for(int i = 1; i < R; i++) 
            for(int j = 1; j < C; j++) 
                countDP[i][j] = M.get(i).get(j) + 
                               countDP[i - 1][j] + 
                               countDP[i][j - 1] - 
                               countDP[i - 1][j - 1]; 
                               
        ArrayList<Integer> res = new ArrayList<>();
         
        // Loop to solve each query 
        for(int q = 0; q < Q; q++)
        { 
            int i = q_i[q]; 
            int j = q_j[q]; 
             
            int min_dist = Math.min(Math.min(i, j), 
                                    Math.min(R - i - 1,
                                             C - j - 1)); 
                                              
            int ans = -1, l = 0, u = min_dist; 
             
            // Binary Search to the side which 
            // have atmost in K 1's in square 
            while (l <= u)
            { 
                int mid = (l + u) / 2; 
                int x1 = i - mid, x2 = i + mid; 
                int y1 = j - mid, y2 = j + mid; 
                 
                // Count total number of 1s in 
                // the sub square considered 
                int count = countDP[x2][y2]; 
                 
                if (x1 > 0) 
                    count -= countDP[x1 - 1][y2]; 
                if (y1 > 0) 
                    count -= countDP[x2][y1 - 1]; 
                if (x1 > 0 && y1 > 0) 
                    count += countDP[x1 - 1][y1 - 1]; 
                 
                // If the count is less than or 
                // equals to the maximum move 
                // to right half 
                if (count <= K) 
                { 
                    ans = 2 * mid + 1; 
                    l = mid + 1; 
                } 
                else
                    u = mid - 1; 
            } 
            if(ans == -1)
                ans = 0;
            res.add(ans); 
        } 
        return res;
    }
};
