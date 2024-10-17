class Solution {
public:
    /**
    *   1000 (8)
    * & 0111 (7)
    * ----------
    *   0000 (0)
    */
    bool isPowerOfTwo(int k) {
        return (k & (k - 1)) == 0;
    }

    int largestPowerOfTwoLessThan(int k) {
        if (k == 1) return 0;

        int exp = floor(log2(k));

        return 1 << exp; // equivalent to pow(2, exp)
        // 1 << 0 -> 0001
        // 1 << 1 -> 0010
        // 1 << 2 -> 0100
    }

    vector<int> minBitwiseArray(vector<int> &nums) {
        int n = nums.size();

        vector<int>ans;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 2) ans.push_back(-1);
            else {
                int temp = nums[i], sum = 0;

                while (temp > 0) {
                    if (isPowerOfTwo(temp + 1)) {
                        sum += temp / 2;
                        temp = 0;
                    } else {
                        int d = largestPowerOfTwoLessThan(temp);
                        sum += d;
                        temp -= d;
                    }
                }

                ans.push_back(sum);
            }		
        }

        return ans;
    }
};