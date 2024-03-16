class Solution {
public:
    int solve(vector<int>& cost, int n){
        //base case
        int prev2 = cost[0];
        int prev1 = cost[1];

        //recursive call
        for(int i=2;i<=n-1;i++){
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        return min(prev1, prev2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return solve(cost, n);
    }
};