class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = pow(result[i], 2);
        }    
        sort(result.begin(), result.end());
        return result;
    }
};