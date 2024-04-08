class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int low = 0, high = (n*m) - 1;
        //Consider it as a 1D matrix, use the formula in line 10 to make it happen
        while(low <= high){

            int mid = (low+high)/2;
            int row = mid / m, col = mid % m;
            
            if(matrix[row][col] == target){
                return true;
            }

            else if(matrix[row][col] < target){
                low = mid + 1;
            }
            
            else{
                high = mid - 1;
            }
        }
        return false;
    }
};