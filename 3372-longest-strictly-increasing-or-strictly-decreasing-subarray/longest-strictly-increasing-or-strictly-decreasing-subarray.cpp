class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        //edge case
        if (nums.size() == 1)   return 1;
        int maxLen = 1, currLen = 1;
        string direct;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i - 1]) {
                if(direct != "increasing"){
                    direct = "increasing";
                    currLen = 1;
                }
                currLen++;
                maxLen = max(maxLen, currLen);
            }
            else if(nums[i] < nums[i - 1]){
                if (direct != "decreasing"){
                    direct = "decreasing";
                    currLen = 1;
                }
                currLen++;
                maxLen = max(maxLen, currLen);
            } 
            else{
                currLen = 1;
            }
        }
        return maxLen;
    }
};