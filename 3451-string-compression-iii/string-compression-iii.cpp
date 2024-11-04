class Solution {
public:
    string compressedString(string word) {
        string output = "";
        int currentSize = 1;
        char currentChar = word[0];

        for (int i = 1; i < word.size(); i++) {
            if (currentChar == word[i] && currentSize < 9) {
                currentSize++;
            } else {
                output.push_back(min(currentSize, 9) + '0');
                output.push_back(currentChar);
                currentChar = word[i];
                currentSize = 1;
            }
        }  

        output.push_back(min(currentSize, 9) + '0');
        output.push_back(currentChar);

        return output;
    }
};