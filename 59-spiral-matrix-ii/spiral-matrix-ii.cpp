class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int left = 0, top = 0, right = n-1, down = n-1;
        int count = 1;

        while(count <= n*n){
            //Right
            for(int i=left;i<=right;i++,count++){
                matrix[top][i] = count;
            }
            top++;
            //Down
            for(int i=top;i<=down;i++,count++){
                matrix[i][right] = count;
            }
            right--;
            //Left
            for(int i=right;i>=left;i--,count++){
                matrix[down][i] = count;
            }
            down--;
            //Up
            for(int i=down;i>=top;i--,count++){
                matrix[i][left] = count;
            }
            left++;
        }
        return matrix;
    }
};