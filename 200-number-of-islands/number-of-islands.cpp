class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col){
        int n = grid.size(), m = grid[0].size();
        //Base case - If out of bound or is water
        if(row < 0 || col < 0 || row == n || col == m || grid[row][col] == '0')   return;
        //If visited then make it a water, thereby no need of visited variable
        grid[row][col] = '0';
        dfs(grid, row+1, col);  //Down
        dfs(grid, row, col+1);  //Right
        dfs(grid, row-1, col);  //Left
        dfs(grid, row, col-1);  //Top
    }

    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    islands += 1;
                    dfs(grid, i, j);
                }
            }
        }
        return islands;
    }
};