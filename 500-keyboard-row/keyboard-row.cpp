#include<bits/stdc++.h>
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";

        unordered_map<char,int> mp;
        vector<string> ans;

        for(auto it:s1){ mp[it]=1; } //mp(value:key): {'a': 1, 'b': 1}
        for(auto it:s2){ mp[it]=2; }
        for(auto it:s3){ mp[it]=3; }

        for(auto it: words){
            int j;
            for(j=1;j<it.size();j++){
                if(mp[tolower(it[j])] != mp[tolower(it[j-1])]){
                    break;
                }
            }
            if(j == it.size()){ 
                ans.push_back(it);
            }
        }
        return ans;
    }
};