using i64 = long long;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        i64 res = 0; 
        int l = 0, r = 0;
        i64 curSum = 0;
        while (r < n) {
            curSum += nums[r];
            while ((i64) (r - l + 1) * curSum >= k && l <= r) {
                curSum -= nums[l++];
            }
            res += r - l + 1;
            r++;
        }
        return res;
    }
};