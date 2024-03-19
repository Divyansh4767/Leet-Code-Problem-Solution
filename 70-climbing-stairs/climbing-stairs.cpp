class Solution {
public:
    int climbStairs(int n) {
        //base case
        int prev2 = 0;
        int prev1 = 1;
        int curr = 0;
        for(int i=0;i<n;i++){
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};