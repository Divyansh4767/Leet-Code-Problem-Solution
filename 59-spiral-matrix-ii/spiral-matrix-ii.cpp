class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int left = 0, top = 0, right = n-1, down = n-1;
        int count = 1, num = n*n;

        while(count <= num){
            while(top <= down && left <= right){
                //Right
                for(int i=left;i<=right;i++){
                    matrix[top][i] = count;
                    count++;
                }
                top++;
                //Down
                for(int i=top;i<=down;i++){
                    matrix[i][right] = count;
                    count++;
                }
                right--;
                //Left
                if(top <= down){
                    for(int i=right;i>=left;i--){
                        matrix[down][i] = count;
                        count++;
                    }
                    down--;
                }
                //Up
                if(left <= right){
                    for(int i=down;i>=top;i--){
                        matrix[i][left] = count;
                        count++;
                    }
                    left++;
                }
            }
        }
        return matrix;
    }
};