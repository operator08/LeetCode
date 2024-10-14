class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        istringstream stream1(sentence1);
        istringstream stream2(sentence2);
        
        vector<string> words1;
        vector<string> words2;
        string word;
        
        while (stream1 >> word) {
            words1.push_back(word);
        }

        while (stream2 >> word) {
            words2.push_back(word);
        }

        int n1 = words1.size();
        int n2 = words2.size();

        int i = 0, j = 0;
        while (i < n1 && i < n2 && words1[i] == words2[i]) {
            i++;
        }

        while (j < (n1 - i) && j < (n2 - i) && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }

        return (i + j >= min(n1, n2));
    }
};