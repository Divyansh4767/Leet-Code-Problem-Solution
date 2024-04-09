class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        int low = 0, high = size - 1, ans = 0;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(citations[mid] >= size - mid){
                ans = max(ans, size - mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};