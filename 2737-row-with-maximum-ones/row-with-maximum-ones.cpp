class Solution {
public:
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] >= x){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = 0, maxCount = 0;

        for(int i=0;i<mat.size();i++){
            sort(mat[i].begin(),mat[i].end());
        }
        for(int i=0;i<mat.size();i++){
            int countOne = mat[0].size() - lowerBound(mat[i], mat[0].size(), 1);
            if(countOne > maxCount){
                maxCount = countOne;
                index = i;
            }
        }
        return {index, maxCount};
    }
};