class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> evens;
        vector<int> odds;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                evens.push_back(nums[i]);
            } else {
                odds.push_back(nums[i]);
            }
        }
        for (int i = 0; i < odds.size(); i++) {
            evens.push_back(odds[i]);
        }
        return evens;
    }
};
/*
To Everyone using nums[ i ] % 2 == 0 to check for even element. Read the question carefully and use bitmask to determine even numbers which is fast computation wise.
( nums[ i ] & 0x1 ) == 0 instead of nums[ i ] % 2 == 0

Problem is bit easy, let make the problem little harder, how can we approach the problem if we have to do the parity sorting in-place with keeping the relative order of even and odd elements as in the original array.
Happy Coding!

*/