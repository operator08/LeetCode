class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1) {
                int p = i;
                for (int j = i + 1; j < n; j++) {
                    if (nums[j] % 2 == 0) {
                        swap(nums[j], nums[i]);
                        p++;
                    }
                }
            }
        }
        return nums;
    }
};
/*
To Everyone using nums[ i ] % 2 == 0 to check for even element. Read the question carefully and use bitmask to determine even numbers which is fast computation wise.
( nums[ i ] & 0x1 ) == 0 instead of nums[ i ] % 2 == 0

Problem is bit easy, let make the problem little harder, how can we approach the problem if we have to do the parity sorting in-place with keeping the relative order of even and odd elements as in the original array.
Happy Coding!

*/