class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int i = n - 1;
        while (left <= right && i >= 0) {
            int square;
            if (abs(nums[left]) < abs(nums[right])) {
                square = nums[right];
                right--;
            } else {
                square = nums[left];
                left++;
            }
            result[i] = square * square;
            i--;
        }    
        return result;
    }
};