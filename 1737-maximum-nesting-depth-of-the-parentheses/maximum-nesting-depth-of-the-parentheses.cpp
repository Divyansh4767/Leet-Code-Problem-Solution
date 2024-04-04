class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int max = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                stack.push('(');
            }
            else if(s[i] == ')'){
                if(stack.size() > max)
                    max = stack.size();
                    stack.pop();
            }
            else 
            //if stack becomes empty
                continue;
        }
        return max;
    }
};