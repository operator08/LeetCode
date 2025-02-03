class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int best = 0, count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;
            } else {
                count = 0;
            }
            best = max(best, count);
        }
        count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
            } else {
                count = 0;
            }
            best = max(best, count);
        }
        return best + 1; 
    }
};