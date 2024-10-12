// One pass hash table

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
       unordered_map<int, int> hash;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end()) {
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
        }    
        return {};
    }
};