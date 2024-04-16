class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOne = 0, index = 0;

        for(int i=0;i<mat.size();i++){
            int countOne=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    countOne++;
                }
            }
            if(countOne > maxOne){
                index = i;
                maxOne = countOne;
            }
        }
        return {index, maxOne};
    }
};