class Solution {
public:
    bool check(string &str1, string &str2, string &ans){
        int m = ans.size(), i = 0, j = 0;
        while(i < str1.size()){
            if(str1[i] != ans[j]){
                return false;
            }
            i += 1;
            j += 1;
            j %= m;
        }

        if(j != 0)  return false;
        
        i = 0;
        while(i < str2.size()){
            if(str2[i] != ans[j]){
                return false;
            }
            i++;
            j++;
            j %= m;
        }
        if(j != 0)  return false;
        return true;
    }

    string gcdOfStrings(string str1, string str2) {
        string res = "", ans = "";
        int size = min(str1.size(), str2.size()), i = 0;
        while(i < size){
            if(str1[i] != str2[i])  break;

            ans += str1[i];
            if(check(str1, str2, ans)){
                res = ans;
            }
            i++;
        }
        return res;
    }
};