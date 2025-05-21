class Solution {
public:
    using i64 = long long;
    int mySqrt(int x) {
        for (int i = 0; i < INT_MAX; i++)
            if ((i64) i * i <= x && (i64) (i + 1) * (i + 1) > x)
                return i;
        return -1;
    }
};