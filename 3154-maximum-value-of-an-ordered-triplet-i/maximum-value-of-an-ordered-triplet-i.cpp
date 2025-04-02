class Solution {
public:
    using i64 = long long;
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        i64 best = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    best = max(best, static_cast<i64> (nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return best;
    }
};