class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string currentWord = "";
    
        bool noWhitespace = 1;

        int n = sentence.size();

        if (sentence[0] != sentence[n - 1])
            return false;
            
        for (int i = 0; i < sentence.size(); i++) {
            char currentChar = sentence[i];
            if (currentChar != ' ') {
                currentWord.push_back(currentChar);         
            } else {
                words.push_back(currentWord);
                currentWord = "";
                noWhitespace = 0;
            }
        }

        if (!currentWord.empty()) {
            words.push_back(currentWord);
        }

        if (noWhitespace) {
            if (sentence[0] == sentence[n - 1])
                return true;
            else 
                return false;
        }

        for (int i = 0; i < words.size() - 1; i++) {
            int n1 = words[i].size();

            if (words[i][n1 - 1] != words[i + 1][0])
                return false;
        }

        return true;
    }
};