class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int p = 1; // first element is unique
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[p] = nums[i + 1];
                p++;
            }
        }
        return p;
    }
};