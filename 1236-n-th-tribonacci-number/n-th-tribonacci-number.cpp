class Solution {
public:
    int solve(int n){
        int prev2 = 0;
        int prev1 = 1;
        int curr = 1;

        for(int i=2;i<=n;i++){
            int sum = curr + prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            curr = sum;
        }
        return curr;
    }
    int tribonacci(int n) {
        if(n == 0)  
            return 0;
        return solve(n-1);
    }
};