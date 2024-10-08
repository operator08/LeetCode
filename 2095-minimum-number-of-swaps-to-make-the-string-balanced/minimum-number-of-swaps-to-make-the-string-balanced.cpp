class Solution {
public:
    int minSwaps(string s) {
        int index = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) {
            if (s[i] == '[')    index++;
            else if (index > 0) index--; 
        }
        return (index + 1) / 2; 
    }
};