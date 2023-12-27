
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n = matrix.size();
        vector<int>arr;
        for (int i = 0; i < n; i++){
            int row = i;
            int col = 0;
            while (row != -1){
                arr.push_back(matrix[col++][row--]);
            }
        }
        for (int i = 1; i < n; i++){
            int row = n-1;
            int col = i;
            while (col != n){
                arr.push_back(matrix[col++][row--]);
            }
        }
        
        return arr;
        
    }
};
