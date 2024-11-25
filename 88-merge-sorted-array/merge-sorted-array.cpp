class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp;
        for (int i = 0; i < m; i++) {
            tmp.push_back(nums1[i]);
        }    
        for (int i = 0; i < n; i++) {
            tmp.push_back(nums2[i]);
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = tmp[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};