class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0 || n == 1) return n;
        if ((n & 1) == 1) return false;
        return isPowerOfTwo(n / 2);
    }
};