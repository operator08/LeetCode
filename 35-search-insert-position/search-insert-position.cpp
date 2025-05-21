class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (target >= nums[n - 1]) return n;
        else if (target <= nums[0]) return 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] <= target && target <= nums[i + 1]) {
                return i + 1;
            }
        }
        return -1;
    }
};