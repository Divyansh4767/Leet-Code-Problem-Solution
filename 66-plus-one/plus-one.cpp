class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;

        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i] + carry > 9){
                digits[i] = 0;
                carry = 1;
            }
            else{
                digits[i] = digits[i] + carry;
                carry = 0;
            }
        }
        if(carry != 0){
            digits[0] = 0;
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
        }
        return digits;
    }
};