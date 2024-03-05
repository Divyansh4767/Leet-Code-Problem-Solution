class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        int start = 0, end = n-1;
        while(start < end && s[start] == s[end]){   
            //checking equal to so that if 1st and last are equal only then it will enter
            char ch = s[start];
            while(start <= end && s[start] == ch){
                start++;
            }
            while(start <= end && s[end] == ch){
                end--;
            }
        }
        return (end - start + 1);
    }
};