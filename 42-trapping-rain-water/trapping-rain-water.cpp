class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1, countWater = 0, leftMax = 0, rightMax = 0;

        while(i <= j){
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);
            //Take 2nd Highest Height
            if(leftMax > rightMax){
                countWater += rightMax - height[j];
                j--;
            } else{
                countWater += leftMax - height[i];
                i++;
            }
        }
        return countWater;
    }
};