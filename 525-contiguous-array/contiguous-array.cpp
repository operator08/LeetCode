class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> sumIndex;
        sumIndex[0] = -1;
        int maxLength = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (!nums[i] ? -1 : 1);
            if (sumIndex.find(sum) != sumIndex.end()) { // or sumIndex.count()
                maxLength = max(maxLength, i - sumIndex[sum]);
            } else {
                sumIndex[sum] = i;
            }
        }
        return maxLength;
    }
};