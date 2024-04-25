class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[nums[0]]++;   mp[nums[1]]++;   mp[nums[2]]++; 

        if(mp.size() == 1){ return "equilateral";}
        else if(mp.size() == 2){
            if(nums[0] + nums[1] > nums[2] && 
               nums[0] + nums[2] > nums[1] && 
               nums[2] + nums[1] > nums[0]){
                return "isosceles";
            }
        }  
        else{
            if(nums[0] + nums[1] > nums[2] && 
               nums[0] + nums[2] > nums[1] && 
               nums[2] + nums[1] > nums[0]){
                return "scalene";
            }
        }
        return "none";
    }
};