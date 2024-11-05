class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>output(n);
        output[0] = nums[0];
        for (int i = 1; i < n; i++) {
            output[i] = nums[i] + output[i - 1];
        }
        return output;
    }
};