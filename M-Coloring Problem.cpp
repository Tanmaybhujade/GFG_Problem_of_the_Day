class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
         vector<int> color(n, 0);
        
        function<bool(int,int)>isColorable = [&](int index,int col) -> bool {
            for(int i=0;i<n;i++){
                if(i!=index && graph[index][i]==1 && col==color[i]) return false;
            }
            return true;
        };
        function<bool(int)>solve = [&](int index) -> bool {
            if(index == n) return true;
            for(int i=1;i<=m;i++){
                if(isColorable(index,i)){
                    color[index] = i;
                    if(solve(index+1)) return true;
                    color[index] = 0;
                }
            }
            return false;
        };
        return solve(0);
    }
};
