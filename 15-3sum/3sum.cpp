class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort nums
        sort(nums.begin(), nums.end());

        // Size of nums
        int n = nums.size();

        // Output vector
        vector<vector<int>> output;

        // Fix one element, so you have a two ptr approach on your hands
        for (int i = 0; i < n; i++) {
            // Initialize left and right pointers
            int left = i + 1;
            int right = n - 1;


            // If previous element was the same continue
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Two pointer approach
            while (left < right) {
                // Current sum
                int sum = nums[i] + nums[left] + nums[right];

                // If sum is greater than 0, decrement right
                if (sum > 0)      right--;
                // If sum is lower than 0, increment left
                else if (sum < 0) left++;

                // If sum is equal to 0, update output vector, increment left, decrement right
                else {
                    output.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    // If the previous left ptr element was the same as current, increment left
                    while(left < right && nums[left] == nums[left - 1])
                        left++;

                    // If the previous right ptr element was the same as current, decrement right
                    while (left < right && nums[right] == nums[right + 1])
                        right--;

                    // We use while loops instead of "if" conditionals, why?
                    // Because we want to increment or decrement the ptrs till we get a different value
                    // Not stop when we increment or decrement once. Stop when it's no longer the same element as before.
                }
            }
        }

        // Return output vector
        return output;
    }
};