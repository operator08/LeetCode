class Solution {
public:
    typedef long long i64;
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        i64 p = 1;
        for (i64 i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[p] = nums[i + 1];
                p++;
            }
        }
        return p;
    }
};