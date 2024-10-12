typedef long long ll;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        ll sum = INT_MAX;
        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum  = nums[left] + nums[right] + nums[i];
                if (abs(target - currentSum) < abs(target - sum)) {
                    sum = currentSum;
                }
                if (currentSum > target) right--;
                else			  left++;
            }
        }    
        return sum;
    }
};