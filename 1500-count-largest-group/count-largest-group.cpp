class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> freq;
        int largestSize = 0;
        for (int i = 1; i <= n; i++) {
            int j = i;
            int sum = 0;
            while (j) {
                sum += j % 10;
                j /= 10;
            }
            freq[sum]++;
            largestSize = max(largestSize, freq[sum]);
        }    
        int res = 0;
        for (auto& [e, v] : freq) {
            if (largestSize == v) {
                res++;
            } 
        }
        return res;
    }
};