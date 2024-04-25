class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int maxi = -1, n = nums[i];
            while(n > 0){
                maxi = max(maxi, n%10);
                n /= 10;
            }

            int newNum = 0, m = nums[i];
            while(m > 0){
                if(m%10 != maxi){
                    newNum = newNum*10 + maxi;
                } else{
                    newNum = newNum*10 + m%10;
                }
                m /= 10;
            }
            sum += newNum;
        }
        return sum;
    }
};