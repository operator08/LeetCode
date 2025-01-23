class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int p = 0;
        for (int i = 0; i < n; i++)  {
            if (i + 1 >= n || nums[i] != nums[i + 1]) {
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};