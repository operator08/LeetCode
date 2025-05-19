class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }    
        n = freq.size();
        if (nums[0] + nums[1] > nums[2] && nums[2] > abs(nums[0] - nums[1])) {
            if (n == 3) return "scalene";
            if (n == 2) return "isosceles";
            else        return "equilateral";
        } else {
            return "none";
        }
    }
};