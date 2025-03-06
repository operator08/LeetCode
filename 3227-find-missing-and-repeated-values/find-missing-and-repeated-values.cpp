class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> v(n * n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v[grid[i][j]]++;   
            }
        }               
        int repeating = 0, missing = 0;
        for (int i = 1; i <= n * n; i++) {
            if (!v[i]) missing = i;
            else if (v[i] == 2) repeating = i;
            if (repeating && missing) break;
        }
        return {repeating, missing};
    }
};