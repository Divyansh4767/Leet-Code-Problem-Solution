class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<int> maxColElement(m, -1);

        for(int i=0;i<m;i++){   //Col
            for(int j=0;j<n;j++){   //Row
                ans[j][i] = matrix[j][i];
                maxColElement[i] = max(maxColElement[i], matrix[j][i]);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans[j][i] == -1)
                    ans[j][i] = maxColElement[i];
            }
        }
        return ans;
    }
};