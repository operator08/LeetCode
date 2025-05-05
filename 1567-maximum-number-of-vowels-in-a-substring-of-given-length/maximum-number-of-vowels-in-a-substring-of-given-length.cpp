class Solution {
public:
    bool isVowel(const char& c) {
        if (c == 'a' || c == 'e' || c == 'i' | c == 'o' || c == 'u') return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        if (n == 1) {
            return isVowel(s[0]);
        }
        int currentVowelCount = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                currentVowelCount++;
            }
        }
        int maxVowelCount = currentVowelCount;
        int j = 0;
        for (int i = k; i < n; i++) {
            if (isVowel(s[j])) currentVowelCount--;
            j++;
            if (isVowel(s[i])) currentVowelCount++;
            maxVowelCount = max(maxVowelCount, currentVowelCount);
        }
        return maxVowelCount;
    }
};