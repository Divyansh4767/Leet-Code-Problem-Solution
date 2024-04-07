#include<bits/stdc++.h>
class Solution {
public:
    bool checkValidString(string s) {
        int start = 0, end = 0;
        for(char ch: s){
            start += (ch == '(') ? 1 : -1;
            end += (ch != ')') ? 1 : -1;

            if(end < 0)    return false;
            start = max(start, 0);
        }
        return (start == 0);
    }
};