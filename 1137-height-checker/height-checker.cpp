class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> h(heights);
        sort(h.begin(), h.end());
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] != heights[i]) res++;
        }
        return res;
    }
};