class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            string intStr = to_string(nums[i]);
            if (intStr.size() % 2 == 0) evenCount++;
        }    
        return evenCount;
    }
};