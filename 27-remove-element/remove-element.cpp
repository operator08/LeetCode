class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) k++;
        }
        for (int i = 0; i < k; i++) {
            if (nums[i] == val) {
                int p = i;
                for (int j = i + 1; j < n; j++) {
                    if (nums[j] != val) {
                        swap(nums[j], nums[p++]);
                    }
                }
            }
        }
        return k;
    }
};