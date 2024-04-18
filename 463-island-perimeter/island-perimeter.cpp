class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int left, right, top, down, ans = 0;
        //Just check left, right, top, down of the current grid
        //No BFS / DFS required
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid[row][col] == 1){
                    if(row == 0)  top = 1;
                    else  top = grid[row-1][col] == 0;

                    if(col == 0)  left = 1;
                    else  left = grid[row][col-1] == 0;

                    if(row == n - 1)  down = 1;
                    else  down = grid[row+1][col] == 0;

                    if(col == m - 1)  right = 1;
                    else  right = grid[row][col+1] == 0;

                    ans += (left + right + top + down);
                }
            }
        }
        return ans;
    }
};