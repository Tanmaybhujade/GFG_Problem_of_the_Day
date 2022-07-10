class Solution
{
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void xxx(int i,int j,int n,int m,vector<vector<int>>&grid)
    {
        if(i==n-1 && j==m-1)
        {
            temp.push_back(grid[i][j]);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        
        temp.push_back(grid[i][j]);
        if(i!=n-1)
        xxx(i+1,j,n,m,grid);
        if(j!=m-1)
        xxx(i,j+1,n,m,grid);
        temp.pop_back();
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        ans.clear();
        temp.clear();
        xxx(0,0,n,m,grid);
        return ans;
    }
};
