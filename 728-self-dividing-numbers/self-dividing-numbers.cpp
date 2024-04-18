class Solution {
public:
    bool check(int n) {
        int num = n;
        while(num > 0){
            int rem = num % 10;
            if(rem == 0 || n % rem != 0)    return false;
            num /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(check(i))    ans.push_back(i);
        }
        return ans;
    }
};