class Solution {
public:
    int tri(int t1, int t2, int t3, int n) {
        if (n == 1) {
            return t3+t2+t1;
        }
        int t4 = t1 + t2 + t3;
        int ans=tri(t2, t3, t4, n - 1);
        return ans;
    }
    
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }else if(n==1 || n==2){
            return 1;
        }
        return tri(0, 1, 1, n-2);
    }
};