
class Solution:
    
    #Function to return list of integers that form the boundary 
    #traversal of the matrix in a clockwise manner.
    def BoundaryTraversal(self,matrix, n, m):
        
        # first line
        res=matrix[0]
        
        if n==1:
            return res
        
        # last column
        for i in range(1,n):
            res.append(matrix[i][m-1])
            
        if m==1:
            return res
            
        # last line - reversed
        llr=matrix[n-1][m-2::-1]
        res=res+llr
        
        # first column - reversed
        for i in range(n-2,0,-1):
            res.append(matrix[i][0])
            
        return res
