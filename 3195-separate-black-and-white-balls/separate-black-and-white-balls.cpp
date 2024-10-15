class Solution {
public:
    typedef long long ll;
    ll minimumSteps(string s) {
        ll n = s.size();
        ll ans = 0;

        ll right = n - 1;
        ll count = 0;
        while (right >= 0) {
            if (s[right] == '0') {
                count++;
            } else {
                ans += count;
            }

            right--;
        }

        return ans;
    }
};