#include<bits/stdc++.h>
class Solution {
public:
    int solveSO(vector<vector<char>>& matrix, int &maxi){
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> curr(col+1, 0);
        vector<int> next(col+1, 0);
        
        //replace dp[i] -> curr and dp[i+1] -> next
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                
                int right = curr[j+1];
                int diagonal = next[j+1];
                int down = next[j];
                
                //check the current element is 1
                if(matrix[i][j] == '1'){
                    curr[j] = 1 + min(right, min(down, diagonal));
                    maxi = max(maxi, curr[j]); //by reference the value of maxi is updated in main func
                }
                else{     //current element is 0
                    curr[j] = 0;
                }
            }
            //Updation
            next = curr;
        }
        return next[0];
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi = 0;
        solveSO(matrix, maxi);
        return (maxi * maxi);
    }
};