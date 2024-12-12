typedef long long i64;
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        sort(gifts.begin(), gifts.end(), greater<int>());
        while (k--) {
            gifts[0] = sqrt(gifts[0]);
            sort(gifts.begin(), gifts.end(), greater<int>());
        } 
        i64 totalGifts = 0;
        for (int i = 0; i < n; i++) {
            totalGifts += gifts[i];
        }
        return totalGifts;
    }
};