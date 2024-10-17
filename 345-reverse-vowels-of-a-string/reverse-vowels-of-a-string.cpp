class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u'};

        int size = s.size();

        int left = 0, right = size - 1;

        while (left < right) {
            if (vowels.find(tolower(s[left])) != vowels.end()) {
                if (vowels.find(tolower(s[right])) != vowels.end()) {
                    swap(s[left], s[right]);
                    left++;
                }

                right--;
            } else {
                if (vowels.find(tolower(s[left])) != vowels.end()) {
                    swap(s[left], s[right]);
                    right--;
                }

                left++;
            }
        }

        return s;
    }
};