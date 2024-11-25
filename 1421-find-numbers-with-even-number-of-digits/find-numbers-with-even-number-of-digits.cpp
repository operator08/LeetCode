class Solution {
public:
    bool hasEvenDigits(int n) {
        int digitCount = 0;
        while (n) {
            n /= 10;
            digitCount++;
        }
        return (digitCount & 1) == 0;
    }

    int findNumbers(vector<int>& nums) {
        int evenDigitCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (hasEvenDigits(nums[i])) evenDigitCount++;
        }
        return evenDigitCount;
    }
};