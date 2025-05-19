class Solution {
public:
    int fib(int n) {
        static vector<int> memo(31, 0);
        if (n == 1 || n == 0) return n;
        if (!memo[n]) memo[n] = fib(n - 1) + fib(n - 2);
        return memo[n];
    }
};