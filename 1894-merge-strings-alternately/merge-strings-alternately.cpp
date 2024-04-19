class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int oneIndex = 0, twoIndex = 0;
        if(word1.size() >= word2.size()){
            while(twoIndex < word2.size()){
                ans += word1[oneIndex++];
                ans += word2[twoIndex++];
            }
            while(oneIndex < word1.size()){
                ans += word1[oneIndex++];
            }
        }
        else{
            while(oneIndex < word1.size()){
                ans += word1[oneIndex++];
                ans += word2[twoIndex++];
            }
            while(twoIndex < word2.size()){
                ans += word2[twoIndex++];
            }
        }
        return ans;
    }
};