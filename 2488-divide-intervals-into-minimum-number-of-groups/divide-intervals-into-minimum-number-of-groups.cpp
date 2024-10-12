class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<int> startTimes, endTimes;

        for (int i = 0; i < n; i++) {
            startTimes.push_back(intervals[i][0]);
            endTimes.push_back(intervals[i][1]);
        }

        sort(startTimes.begin(), startTimes.end());
        sort(endTimes.begin(), endTimes.end());

        int endPtr = 0, groups = 0;
        for (int i = 0; i < n; i++) {
            if (startTimes[i] > endTimes[endPtr]) {
                endPtr++;
            }
            else {
                groups++;
            }
        }
        return groups;
    }
};