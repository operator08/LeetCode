class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = 0, j = part.size();
        while (i + j <= s.size()) {
            if (s.substr(i, j) == part) {
                s.erase(i, j);
                i = max(0, i - j);
            } else {
                i++;
            }
        }
        return s;
    }
};