class Solution {
public:
        bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            v.push_back(nums[i]); 
        }
        int best = 0;
        int count = 0;
        for (int i = 0; i < 2 * n - 1; i++) {
            best = max(best, count);
            if (v[i] <= v[i + 1]) count++;
            else                  count = 0;
        }
        return best + 1 >= n;
    }
};