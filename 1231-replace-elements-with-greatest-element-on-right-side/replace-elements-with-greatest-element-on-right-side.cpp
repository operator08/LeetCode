class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // for every element in array, find the greatest element to its right, and replace it with it
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int maxElement = 0;
            for (int j = i + 1; j < n; j++) {
                maxElement = max(maxElement, arr[j]);
            }
            arr[i] = maxElement;
        }
        arr[n - 1] = -1;
        return arr;
    }
};