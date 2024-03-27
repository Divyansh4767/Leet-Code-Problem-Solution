#include<unordered_set>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(auto it: nums){
            if(mp.find(it) != mp.end()) return it;
            else mp.insert(it);
        }
        return -1;
    }
};