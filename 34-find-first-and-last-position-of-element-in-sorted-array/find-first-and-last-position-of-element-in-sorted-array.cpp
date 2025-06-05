class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binarySearch(nums, target, true), binarySearch(nums, target, false)};
    }
    
    int binarySearch(const vector<int>& nums, int target, bool leftPtr) {
        int left = 0, right = nums.size() - 1;
        int res = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                res = mid;
                if (leftPtr) right = mid - 1;
                else         left = mid + 1;
            }
        }
        return res;
    }
};