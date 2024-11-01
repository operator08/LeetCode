class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        int consecutive = 1;
        char consecutiveChar = s[0];

        string output = "";
        output.push_back(s[0]);

        for (int i = 1; i < n; i++) {
            if (consecutiveChar == s[i]) {
                consecutive++;
            } else {
                consecutive = 1;
                consecutiveChar = s[i];
            }

            if (consecutive < 3) {
                output.push_back(s[i]);
            }
        }

        return output;
    }
};