class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;  st.push(-1);
        vector<int> ans(nums2.size()), res(nums1.size(), -1);

        for(int i=nums2.size()-1;i>=0;i--){
            while(st.top() != -1 && nums2[i] > st.top()){   st.pop();}

            ans[i] = st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            int j = 0;
            while(nums1[i] != nums2[j]){    j++;}

            res[i] = ans[j];
        }
        return res;
    }
};