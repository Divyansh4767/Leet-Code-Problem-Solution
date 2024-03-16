class Solution {
public:
    int fib(int n) {
        //using DP
        int prev1 = 1;
        int prev2 = 0;
        //edge case
        if(n == 0)  return 0;
        
        for(int i=2;i<=n;i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};