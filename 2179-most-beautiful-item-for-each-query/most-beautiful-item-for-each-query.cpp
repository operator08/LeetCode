class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size(), m = queries.size();
        map<int, int> maxBeautyForPrice;
        sort(items.begin(), items.end());
        int maxBeauty = 0;
        for (int i = 0; i < n; i++) {
            // Check max beauty you can get per price
            maxBeauty = max(maxBeauty, items[i][1]);
            maxBeautyForPrice[items[i][0]] = maxBeauty;
        }
        vector<int> ans(m);
        for (int i = 0; i < m; i++) {
            auto it = maxBeautyForPrice.upper_bound(queries[i]);
            if (it == maxBeautyForPrice.begin()) {
                ans[i] = 0;
            } else {
                ans[i] = prev(it)->second;
            }
        }
        return ans;
    }
};