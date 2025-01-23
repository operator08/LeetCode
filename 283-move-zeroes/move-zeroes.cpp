class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                int p1 = i - 1;
                int p2 = i;
                while (p1 >= 0 && nums[p1] == 0) {
                    swap(nums[p1], nums[p2]);
                    p2--;
                    p1--;        
                }    
            }
        }
    }
};