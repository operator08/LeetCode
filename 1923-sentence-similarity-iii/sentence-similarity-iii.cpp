class Solution {
public:
    vector<string> splitIntoWords(string &sentence) {
        vector<string> words;

        string currentWord;

        for (char c : sentence) {
            if (isspace(c)) {
                if (!currentWord.empty()) {
                    words.push_back(currentWord);
                    currentWord.clear();	
                }
                
            } else {
                currentWord += c;
            }
        }

        // Add the last word to the vector
        if (!currentWord.empty()) {
            words.push_back(currentWord);	
        }

        return words;
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> words1 = splitIntoWords(sentence1);
        vector<string> words2 = splitIntoWords(sentence2);

        int n1 = words1.size();
        int n2 = words2.size();

        // Check for similar prefixes
        int i = 0, j = 0;
        while (i < n1 && i < n2 && words1[i] == words2[i]) {
            i++;
        }	

        // Check for similar suffixes
        while (j < n1 - i && j < n2 - i && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }

        // One sentence must consist of only the common words
        return (i + j >= min(n1, n2));
    }
};