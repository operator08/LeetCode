class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = 0, j = part.size();
        while (i + j <= s.size()) {
            if (s.substr(i, j) == part) {
                s.erase(i, j);
                i = 0;
            } else {
                i++;
            }
        }
        return s;
    }
};