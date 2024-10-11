class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> targetTime = times[targetFriend];

        // Sorts according to times[i][0], which represents arrival time in this case
        sort(times.begin(), times.end());

        int n = times.size();
        vector<int> chairTime(n);

        for (auto time : times) {
            for (int i = 0; i < n; i++) {
                if (chairTime[i] <= time[0]) {
                    chairTime[i] = time[1];
                    if (time == targetTime) return i;
                    break;
                }
            }
        }   
        return -1;
    }
};