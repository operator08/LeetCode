class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        unordered_map<int, int> map1;
        unordered_map<int, int> map2;

        // Remove duplicate elements from both of the vectors
        auto it = unique(nums1.begin(), nums1.end());
        nums1.erase(it, nums1.end());

        auto it1 = unique(nums2.begin(), nums2.end());
        nums2.erase(it1, nums2.end());

        int size1 = nums1.size();
        int size2 = nums2.size();

        for (int i = 0; i < size1; i++) {
            map1[nums1[i]]++;
        }

        for (int i = 0; i < size2; i++) {
            map2[nums2[i]]++;

            if (map1.find(nums2[i]) == map1.end()) {
                ans[1].push_back(nums2[i]);
            }
        }

        for (int i = 0; i < size1; i++) {
            if (map2.find(nums1[i]) == map2.end()) {
                ans[0].push_back(nums1[i]);
            }
        }

        return ans;
    }
};