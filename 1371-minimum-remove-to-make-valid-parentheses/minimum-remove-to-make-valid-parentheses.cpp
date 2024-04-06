#include<vector>
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string t;
        int diff = 0, n = s.size();

        for(char c: s){
            diff += (c == '(') - (c == ')');
            if (diff >= 0){
                t.push_back(c);
            } else{
                diff = 0;
            }
        }
        
        diff=0;
        s="";
        for(int i=t.size()-1;i>=0;i--){
            char c = t[i];
            diff += (c == '(') - (c == ')');
            if (diff <= 0){
                s.push_back(c);
            } else{ 
                diff = 0;
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};