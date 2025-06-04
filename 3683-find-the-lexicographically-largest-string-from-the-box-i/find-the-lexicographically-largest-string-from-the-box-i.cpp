class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;
        string bestSub = "";
        int n = word.size();
        for (int i = 0; i < n; i++) {
            string currentSub = word.substr(i, n - numFriends + 1);
            bestSub = max(bestSub, currentSub);
        }
        return bestSub;
    }
};