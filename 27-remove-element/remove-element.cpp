class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writer = 0;
        for (int reader = 0; reader < nums.size(); reader++) {
            if (nums[reader] != val) {
                nums[writer++] = nums[reader];
            }
        }    
        return writer;
    }
};