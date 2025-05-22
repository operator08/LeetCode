class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int left = 0, right = n - 1;
        int i = n - 1;
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                v[i] = pow(nums[left], 2);
                i--;
                left++;
            } else {
                v[i] = pow(nums[right], 2);
                i--;
                right--;
            }
        }    
        return v;
    }
};