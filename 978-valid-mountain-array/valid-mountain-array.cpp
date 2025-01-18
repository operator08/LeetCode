class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int p = 0;
        if (n < 3) return false;
        while (p < n - 1 && arr[p] < arr[p + 1]) p++;
        if (p == n - 1 || p == 0) return false;
        while (p < n - 1 && arr[p] > arr[p + 1]) p++;
        return p == n - 1;
    }
};