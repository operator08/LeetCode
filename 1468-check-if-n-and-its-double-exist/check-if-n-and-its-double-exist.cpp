class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool check = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j] * 2 || arr[i] * 2 == arr[j]) check = 1;
            }
        }    
        return check;
    }
};