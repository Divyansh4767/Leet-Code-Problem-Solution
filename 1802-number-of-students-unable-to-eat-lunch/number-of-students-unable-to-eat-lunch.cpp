class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        int n = students.size();
        for(int i=0;i<n;i++){
            st.push(sandwiches[n-i-1]);
            q.push(students[i]);
        }

        int missed = 0;
        while(!q.empty()){
            if(q.front() == st.top()){
                q.pop();
                st.pop();
                missed = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                missed++;
                if(missed == q.size())  break;
            }
        }
        return q.size();
    }
};