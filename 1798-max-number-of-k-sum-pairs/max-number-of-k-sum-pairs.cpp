class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int operations = 0;
        sort(nums.begin(), nums.end());
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == k) {
                operations++;
                left++;
                right--;
            }
            else if (sum < k) left++;
            else              right--;

        }
        return operations; 
    }
};