class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= 0) {
                left = mid + 1; 
            } else if (nums[mid] > 0) {
                i = mid;
                right = mid - 1;
            }
        }
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= 0) {
                right = mid - 1;
            } else if (nums[mid] < 0) {
                j = mid;
                left = mid + 1;
            }
        }
        if (nums[n - 1] == 0) i = n;
        if (nums[0] == 0)     j = -1;
        return max(n - i, j + 1);
    }
};
// get the split mid, if mid == positive, 