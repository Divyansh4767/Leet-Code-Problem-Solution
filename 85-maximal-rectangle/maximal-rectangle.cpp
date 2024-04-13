class Solution {
public:
    vector<int> nextSmallerElement(vector<int> &arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            //Ans is at top of stack
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> &arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            //Ans is at top of stack
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for(int i=0;i<n;i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), area = INT_MIN;
        vector<int> heights(m, 0);
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] != '0'){
                    heights[j] ++;
                } else{
                    heights[j] = 0;
                }
            }
            area = max(area, largestRectangleArea(heights));
        }
        return area;
    }
};