class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1, ans = INT_MIN;
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == 0){
                ans = max(ans, nums[j]);
                i++;    j--;
            } else if(sum < 0){
                i++;
            } else{
                j--;
            }
        }
        return ans != INT_MIN ? ans : -1;
    }
};