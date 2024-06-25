class Solution:
    def rotateMatrix(self, k, mat):
        # code here
        n,m=len(mat),len(mat[0])
        rmat=[[0]*m for i in range(n)]
        if k%m ==0 :
            return mat
        ans=k%m
        for i in range(n) :
            c=0
            for j in range(ans,m) :
                rmat[i][c]=mat[i][j]
                c +=1
        for i in range(n) :
            c=m-ans
            for j in range(ans) :
                rmat[i][c]=mat[i][j]
                c +=1
        return rmat
