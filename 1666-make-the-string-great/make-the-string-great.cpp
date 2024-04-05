#include<stack>
class Solution {
public:
    string makeGood(string& s){
        stack<char> st;
        for (int i=0;i<s.size();i++){
            if( !st.empty() && abs(st.top() - s[i]) == 32 ){
                st.pop(); 
                continue;
            }
            st.push(s[i]);
        }
        string result="";
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};