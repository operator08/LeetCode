class Solution {
public:
    using i64 = long long;
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            int curSpell = spells[i];
            int count = 0;
            int left = 0, right = m - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if ((i64) potions[mid] * curSpell >= success) {
                    count += right - mid + 1;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            res[i] = count;
        }    
        return res;
    }
};