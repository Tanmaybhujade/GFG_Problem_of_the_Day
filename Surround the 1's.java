class Solution
{
    public int  Count(int[][] matrix){
        if(matrix.length==1) return 0;
        int count=0,n=matrix.length,m=matrix[0].length;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int countZero=0;
                if(matrix[i][j]==1){
                    if(i+1<n && j+1<m && matrix[i+1][j+1]==0) countZero++;
                    if(j-1>=0 && matrix[i][j-1]==0) countZero++;
                    if(i+1<n && matrix[i+1][j]==0) countZero++;
                    if(i+1<n && j-1>=0 && matrix[i+1][j-1]==0) countZero++;
                    if(i-1>=0 && j-1>=0 && matrix[i-1][j-1]==0) countZero++;
                    if(i-1>=0 && matrix[i-1][j]==0) countZero++;
                    if(i-1>=0 && j+1<m && matrix[i-1][j+1]==0) countZero++;
                    if(j+1<m && matrix[i][j+1]==0) countZero++;
                }
                if(countZero>0 && countZero%2==0) count ++;
            }
        }
        return count;
    }
}
