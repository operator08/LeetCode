class Solution {
public:
    int trailingZeroes(int n) {
        int fiveCount = 0;
        for (int i = 5; n / i > 0; i *= 5) {
            fiveCount += n / i;
        }
        return fiveCount;
    }
};