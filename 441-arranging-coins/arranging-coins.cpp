class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = n, ans = 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if((mid * (mid+1) / 2) <= n){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};