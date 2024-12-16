class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while (k--) {
            int minElement = *min_element(nums.begin(), nums.end());
            for (int i = 0; i < n; i++) {
                if (nums[i] == minElement) {
                    nums[i] *= multiplier;
                    break;
                }
            }   
        }
        return nums;
    }
};