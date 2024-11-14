class Solution {
public:
    bool canDistribute(int x, vector<int> quantities, int n) {
        int p = 0;
        int remaining = quantities[p];
        for (int i = 0; i < n; i++) {
            if (remaining <= x) {
                p++;
                if (p == quantities.size()) {
                    return true;
                } else {
                    remaining = quantities[p];
                }
            } else {
                remaining -= x;
            }
        }
        return false;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 0;
        int right = *max_element(quantities.begin(), quantities.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canDistribute(mid, quantities, n)) right = mid;
            else                                   left = mid + 1;
        }
        return left;
    }
};