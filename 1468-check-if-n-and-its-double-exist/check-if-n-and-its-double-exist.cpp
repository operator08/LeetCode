class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;
            while (left <= right) { // [left, right], if < then [left, right)
                int mid = left + (right - left) / 2;
                if (mid != i && arr[mid] == 2 * arr[i]) {
                    return true;
                } else if (arr[mid] < 2 * arr[i]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};