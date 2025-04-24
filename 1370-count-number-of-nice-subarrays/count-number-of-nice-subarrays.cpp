class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        freq[0] = 1; // for the contigous subarrays that start from the beginning
        int res = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (nums[i]) & 1;
            // sum - x = 
            if (freq.find(sum - k) != freq.end()) {
                res += freq[sum - k];
            }
            freq[sum]++;
        }
        return res;
    }
};