class Solution {
public:
    int solve(vector<int> grid, int col){
        int low = 0, high = col - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(grid[mid] < 0){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        //no negative value;
        if(low >= col){
            return 0;
        }
        return col - low;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size(), count = 0;
        for(int i=0;i<row;i++){
            count += solve(grid[i], col);
        }
        return count;
    }
};