class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxOneInt = -1;

        int curRep = nums[0];
        int count = 0;

        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (curRep != nums[i]) {
                if (count == 1) {
                    maxOneInt = max(maxOneInt, curRep);
                }
                curRep = nums[i];
                count = 1;
            } else {
                count++;
            }
        }
        
        if (count == 1) {
            maxOneInt = max(maxOneInt, curRep);
        }

        return maxOneInt;
    }
};