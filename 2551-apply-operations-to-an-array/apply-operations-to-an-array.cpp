class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == 0) zeroCount++;
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        if (nums[n - 1] == 0) zeroCount++;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) v.push_back(nums[i]);
        }
        while (zeroCount--) {
            v.push_back(0);
        }
        return v;
    }
};