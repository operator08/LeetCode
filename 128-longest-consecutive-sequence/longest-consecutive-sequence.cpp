class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        int longestStreak = 0, currentStreak = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] == nums[i] + 1)
                currentStreak++;
            else if (nums[i + 1] == nums[i])
                continue;
            else
                currentStreak = 0;

            longestStreak = max(longestStreak, currentStreak);
        }  

        return longestStreak + 1;  
    }
};