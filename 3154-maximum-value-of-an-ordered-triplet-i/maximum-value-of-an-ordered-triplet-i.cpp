class Solution {
public:
    using i64 = long long;
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        i64 best = -1;
        for (int i = 0; i < n; i++) {
            i64 cur = nums[i];
            for (int j = i + 1; j < n; j++) {
                cur -= nums[j];
                for (int k = j + 1; k < n; k++) {
                    cur *= nums[k];
                    best = max(best, cur);
                    cur /= nums[k];
                }
                cur += nums[j];
            }
        }
        if (best < 0) return 0;
        return best;
    }
};