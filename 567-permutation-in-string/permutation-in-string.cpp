#include <bits/stdc++.h>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        for (char c : s1) {
            freq1[c]++;
        }

        for (int i = 0; i < s1.size(); i++) {
            freq2[s2[i]]++;
        }

        if (freq1 == freq2) return true;

        for (int i = s1.size(); i < s2.size(); i++) {
            freq2[s2[i]]++;

            char leftChar = s2[i - s1.size()];
            freq2[leftChar]--;
            if (freq2[leftChar] == 0) {
                freq2.erase(leftChar);
            }

            if (freq1 == freq2) return true;
        }

        return false;
    }
};