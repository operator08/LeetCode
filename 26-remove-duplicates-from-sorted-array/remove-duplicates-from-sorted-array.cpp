class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int p = 0;
        for (int i = 0; i < n; i++) {
            if (freq[nums[i]]++ < 1) {
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};