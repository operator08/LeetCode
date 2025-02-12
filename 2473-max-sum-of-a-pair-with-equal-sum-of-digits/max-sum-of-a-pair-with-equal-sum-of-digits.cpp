class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    
    int maximumSum(vector<int>& nums) {
        int n = nums.size();    
        vector<pair<int, int>> digitSums(n);
        for (int i = 0; i < n; i++) {
            digitSums[i] = {digitSum(nums[i]), nums[i]};    
        }
        sort(digitSums.begin(), digitSums.end(), greater<pair<int, int>>());
        int best = -1;
        for (int i = 0; i < n - 1; i++) {
            if (digitSums[i].first == digitSums[i + 1].first) {
                best = max(best, digitSums[i].second + digitSums[i + 1].second);
            }
        }
        return best;
    }
};