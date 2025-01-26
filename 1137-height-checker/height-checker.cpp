class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> h(heights);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (h[i] > h[j]) {
                    swap(h[i], h[j]);
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] != heights[i]) res++;
        }
        return res;
    }
};