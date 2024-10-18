class Solution {
public:
    int maxResult = 0;
    int count = 0;
    int n;

    void search(int k, int currentOR, const vector<int>& nums) {
        if (k == n) {
            if (currentOR > maxResult) {
                maxResult = currentOR;
                count = 1;
            } else if (currentOR == maxResult) {
                count++;
            }
            return;
        }
        search(k + 1, currentOR, nums);
        search(k + 1, currentOR | nums[k], nums);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        n = nums.size();
        search(0, 0, nums);
        return count;
    }
};
