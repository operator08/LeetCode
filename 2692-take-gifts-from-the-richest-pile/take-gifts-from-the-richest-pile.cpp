typedef long long i64;
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        while (k--) {
            sort(gifts.begin(), gifts.end(), greater<int>());
            gifts[0] = sqrt(gifts[0]);
        } 
        i64 totalGifts = 0;
        for (int i = 0; i < n; i++) {
            totalGifts += gifts[i];
        }
        return totalGifts;
    }
};