class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] + nums[i + 2] == nums[i + 1] / 2.0) {
                res++;
            }
        }    
        return res;
    }
};