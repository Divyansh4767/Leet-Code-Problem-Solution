class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mp1(200, -1);
        vector<int> mp2(200, -1);
        
        for(int k=0;k<s.size();k++){
            if(mp1[s[k]] != mp2[t[k]]){
                return false;
            }
            mp1[s[k]] = k + 1; 
            mp2[t[k]] = k + 1; 
        }
        return true;
    }
};
