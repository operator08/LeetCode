class Solution {
public:
    int minChanges(string s) {
        int output = 0;
        for (int i = 0; i < s.size() - 1; i+=2) {
            if (abs(s[i] - s[i + 1]) == 1) {
                output++;			
            }
        }
        return output;
    }
};