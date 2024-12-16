class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        vector<int> uq;
        for (int i = 0; i < n; i++) {
            if (!freq[nums[i]]++) {
                uq.push_back(nums[i]);
            }
        }     
        n = uq.size();
        for (int i = 0; i < n; i++) {
            nums[i] = uq[i];
        }
        return n;
    }
};