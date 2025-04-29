using i64 = long long;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxElement = *max_element(nums.begin(), nums.end());
        i64 res = 0, curCount = 0, left = 0;
        // greedy right
        for (int right = 0; right < n; right++) {
            if (nums[right] == maxElement) {
                curCount++;
            }
            while (curCount >= k) {
                res += n - right;
                if (nums[left] == maxElement) {
                    curCount--;
                }
                left++;
            }
        }
        return res;
    }
};