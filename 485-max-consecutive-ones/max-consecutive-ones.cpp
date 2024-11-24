class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int consecutive = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) consecutive++;
            else              consecutive = 0;
            maxConsecutive = max(maxConsecutive, consecutive);
        }    
        return maxConsecutive;
    }
};