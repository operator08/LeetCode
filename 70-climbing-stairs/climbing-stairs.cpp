class Solution {
public:
    int climbStairs(int n) {
        static vector<int> memo(46, 0);
        if (n == 0 || n == 1) return 1;
        if (memo[n] != 0)     return memo[n]; 
        memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return memo[n];
    }
};