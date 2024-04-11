class Solution {
public:
    string removeKdigits(string num, int k) {   //TC & SC - O(N)
        stack<char> st;
        //Remove larger digits before smaller ones
        for(int i=0;i<num.size();i++){
            while(!st.empty() && st.top() > num[i] && k > 0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        //edge case - If it's a monotonic stack(always increasing) -> Remove last k digits
        while(k > 0){
            st.pop();
            k--;
        }   
        //Convert it into a string
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        //edge case - to eliminate leading 0's like 0200
        int endIndex = 0;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i] != '0'){
                endIndex = i;
                break;
            }
        }   
        //Take string before leading 0's only
        ans = ans.substr(0, endIndex + 1);
        reverse(ans.begin(), ans.end());
        if(ans == "")   ans = "0";
        return ans;
    }
};