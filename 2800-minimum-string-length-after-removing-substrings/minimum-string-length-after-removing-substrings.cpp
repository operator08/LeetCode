class Solution {
public:
    int minLength(string s) {
        int length = s.size();

        bool reduced = true;
        while (reduced) {
            reduced = false;
            for (int i = 0; i < length - 1; i++) {
                if (s[i] == 'A' && s[i + 1] == 'B') {
                    length -= 2;
                    s.erase(i, 2);
                    reduced = true;
                    continue;
                }
                else if (s[i] == 'C' && s[i + 1] == 'D') {
                    length -= 2;
                    s.erase(i, 2);
                    reduced = true;
                    continue;
                }
            } 
        }
        return length; 
    }
};