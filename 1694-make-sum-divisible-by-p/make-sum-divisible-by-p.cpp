class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        // (a + b) % p == ((a % p) + (b % p)) % p
        int n = nums.size();
        unordered_map<int, int> modMap;
        modMap[0] = -1;
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum = (totalSum + nums[i]) % p;
        }
        int target = totalSum % p;
        if (target == 0) return 0;
        int currentSum = 0, minLength = INT_MAX;
        for (int i = 0; i < n; i++) {
            currentSum = (currentSum + nums[i]) % p;
            int needed = (currentSum - target + p) % p;
            if (modMap.find(needed) != modMap.end()) {
                minLength = min(minLength, i - modMap[needed]);
            }
            modMap[currentSum] = i;
        }
        return minLength == n ? -1 : minLength;
    }    
};