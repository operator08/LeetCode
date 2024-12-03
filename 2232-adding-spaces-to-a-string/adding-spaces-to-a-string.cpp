class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int p1 = 0, p2 = 0;
        while (p2 < spaces.size()) {
            if (p1 == spaces[p2]) {
                ans += ' ';
                p2++;
            }
            ans += s[p1++];
        }
        while (p1 < s.size()) {
            ans += s[p1++];
        }
        return ans;
    }
};