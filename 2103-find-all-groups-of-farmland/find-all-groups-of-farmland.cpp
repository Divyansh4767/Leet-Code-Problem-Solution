class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> res;
        for(int row1=0;row1<land.size();row1++){
            for(int col1=0;col1<land[0].size();col1++){
                if(land[row1][col1]){
                    int row2 = row1, col2 = col1;

                    for(row2=row1;row2<land.size() && land[row2][col1];row2++){
                        for(col2=col1;col2<land[0].size() && land[row2][col2];col2++){
                            land[row2][col2] = 0;
                        }
                    }
                    //when it will get out of for loop row2 and col2 will be incremented thereby row2/col2 - 1
                    res.push_back({row1, col1, row2-1, col2-1});
                }
            }
        }
        return res;
    }
};