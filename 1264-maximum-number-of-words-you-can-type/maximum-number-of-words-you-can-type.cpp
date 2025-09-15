class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        std::istringstream iss(text);
        std::string currentWord;
        int output = 0;
        while (iss >> currentWord) {
            bool canType = true;
            for (const char& c : currentWord) {
                for (const char& b1 : brokenLetters) {
                    if (c == b1) {
                        canType = false;
                        break;
                    }
                }
                if (!canType) break;
            }

            if (canType) output++;
        }
        return output;
    }
};