class Solution {
public:
    typedef long long i64;
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int p = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[p] = nums[i + 1];
                p++;
            }
        }
        return p;
    }
};