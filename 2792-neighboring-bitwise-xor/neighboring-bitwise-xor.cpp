class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {    
        int n = derived.size();
        int xorSum = 0;
        for (int i = 0; i < n; i++) {
            xorSum ^= derived[i];
        }
        return !xorSum;
    }
};