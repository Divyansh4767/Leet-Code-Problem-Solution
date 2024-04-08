class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = n;
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            if((mid * (mid+1) / 2) > n){
                high = mid - 1;
            }
            else if((mid * (mid+1) / 2) < n){
                low = mid + 1;
            }
            else{
                return mid;
            }
        }
        return high;
    }
};