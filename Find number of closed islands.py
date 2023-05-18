
class Solution:
    def dfs(self, matrix, x, y):
        matrix[x][y] = 0
        n, m = len(matrix), len(matrix[0])
        ret = True
        for nx, ny in [(x, y+1), (x, y-1), (x-1, y), (x+1, y)]:
            if 0 <= nx < n and 0 <= ny < m and matrix[nx][ny]:
                ret = ret and 0 < nx < n-1 and 0 < ny < m-1
                if not self.dfs(matrix, nx, ny):
                    ret = False
        return ret
        
	def closedIslands(self, matrix, N, M):
		return sum([self.dfs(matrix, i, j) for i in range(1, N-1) for j in range(1, M-1) if matrix[i][j]], 0)
