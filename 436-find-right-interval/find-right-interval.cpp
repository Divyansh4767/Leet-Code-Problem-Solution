#include<unordered_map>
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans(intervals.size());
        map<int, int> mp;
        for(int j=0;j<intervals.size();j++){
            mp[intervals[j][0]] = j;
        }

        for(int i=0;i<intervals.size();i++){
            ans[i] = (mp.lower_bound(intervals[i][1]) != mp.end()) ? mp.lower_bound(intervals[i][1]) -> second : -1;
        }
        return ans;
    }
};