class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }
        int res = 0;
        for (int i = 0; i < n; i++){
            if (freq[s[i]] != 0) {
                res += freq[s[i]] % 2 == 0 != 0 ? 2 : 1;
                freq[s[i]] = 0;
            }
        }
        return res;
    }
};