{
    public int FindWays(int n, int m, int[][] blocked_cells)
    {
        int[][] matrix = new int[n][m];
        
        for(int i=0; i<n; i++)
          for(int j=0; j<m; j++)
             matrix[i][j] = -1;
        
        for(int i=0; i<blocked_cells.length; i++)
           matrix[blocked_cells[i][0] - 1][blocked_cells[i][1] - 1] = 0;
         
         if(matrix[n-1][m-1] == 0)
            return 0;
        else{
            matrix[n-1][m-1] = 1;
            for(int i=n-2; i>=0; i--){
                if(matrix[i][m-1] != 0 && matrix[i+1][m-1] != 0)
                    matrix[i][m-1] = 1;
                if(matrix[i][m-1] != 0 && matrix[i+1][m-1] == 0)
                    matrix[i][m-1] = 0;
            }
            
            for(int i=m-2; i>=0; i--){
                if(matrix[n-1][i] != 0 && matrix[n-1][i+1] != 0)
                     matrix[n-1][i] = 1;
                if(matrix[n-1][i] != 0 && matrix[n-1][i+1] == 0)
                     matrix[n-1][i] = 0;
            }
            
            for(int i=n-2; i>= 0; i--){
                for(int j=m-2; j>=0; j--){
                    if(matrix[i][j] == 0)
                       continue;
                    matrix[i][j] = (matrix[i+1][j] + matrix[i][j+1])%1000000007;
                }
            }
            return matrix[0][0];
        }
    }
}
