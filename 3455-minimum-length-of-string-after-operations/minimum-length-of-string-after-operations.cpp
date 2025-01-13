class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }
        int res = 0;
        for (auto& f : freq) {
            res += f.second % 2 == 0 ? 2 : 1;
        }
        return res;
    }
};