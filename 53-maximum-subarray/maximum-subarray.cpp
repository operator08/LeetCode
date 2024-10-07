class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length = nums.size();

        int best = -100000, sum = 0;
        for (int i = 0; i < length; i++) {
            sum = max(nums[i], sum + nums[i]);
            best = max(best, sum);
        }
        return best;
    }
};