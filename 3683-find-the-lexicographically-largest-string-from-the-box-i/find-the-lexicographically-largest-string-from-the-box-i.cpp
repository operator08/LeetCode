class Solution {
public:
    string answerString(string word, int numFriends) {
        string bestSub = "";
        int n = word.size();
        if (numFriends == 1) return word;
        for (int i = 0; i < n; i++) {
            string currentSub = word.substr(i, n - numFriends + 1);
            bestSub = max(bestSub, currentSub);
        }
        return bestSub;
    }
};