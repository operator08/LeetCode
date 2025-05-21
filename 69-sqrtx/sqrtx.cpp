class Solution {
public:
    using i64 = long long;
    int mySqrt(int x) {
        for (i64 i = 0; i < INT_MAX; i++)
            if (i * i <= x && (i + 1) * (i + 1) > x)
                return i;
        return -1;
    }
};