class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        while(left <= right){
            mid = left + (right-left)/2;
            if(nums[mid] == target){
                break;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return nums[mid] == target ? mid : -1;
    }
};