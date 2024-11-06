class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }

        return count;
    }

    bool canSortArray(vector<int>& nums) {
        vector<int> ascending(nums.begin(), nums.end());
        vector<int> descending(nums.begin(), nums.end());

        sort(ascending.begin(), ascending.end());
        sort(descending.begin(), descending.end(), greater<int>());

        return isSortableToTarget(nums, ascending);
    }

private:
    bool isSortableToTarget(vector<int> nums, const vector<int>& target) {
        int n = nums.size();
        bool isAscending = (target[0] < target[n - 1]);

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (countSetBits(nums[j]) == countSetBits(nums[j + 1])) {
                    if ((isAscending && nums[j] > nums[j + 1]) ||
                        (!isAscending && nums[j] < nums[j + 1])) {
                        swap(nums[j], nums[j + 1]);
                    }
                }
            }
        }

        return nums == target;
    }
};