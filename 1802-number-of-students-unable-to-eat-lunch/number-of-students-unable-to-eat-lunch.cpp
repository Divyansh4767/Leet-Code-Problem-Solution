class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int count0 = 0, count1 = 0;
        for(int student : students){
            if(student == 1){   count1++;}
            else{   count0++;}
        }

        for(int sandwiche : sandwiches){
            if(sandwiche == 0 && count0 == 0)  return count1;
            if(sandwiche == 1 && count1 == 0)  return count0;

            if(sandwiche == 0) count0--;
            else    count1--;
        }
        return 0;
    }
};