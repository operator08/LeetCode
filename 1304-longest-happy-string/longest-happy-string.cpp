#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Maximum Heap approach (Most optimal)
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> maxHeap;
        string s = "";

        if (a > 0) maxHeap.push({a, 'a'});
        if (b > 0) maxHeap.push({b, 'b'});
        if (c > 0) maxHeap.push({c, 'c'});

        string ans = "";

        while (!maxHeap.empty()) {
            auto [count1, char1] = maxHeap.top();

            int n = ans.size();

            maxHeap.pop();

            if (n >= 2 && ans[n - 1] == char1 && ans[n - 2] == char1) {
                if (maxHeap.empty())break;

                auto [count2, char2] = maxHeap.top();

                maxHeap.pop();

                ans += char2;

                if (count2 - 1 > 0) {
                    maxHeap.push({count2 - 1, char2});
                }
            } else {
                count1--;
                ans = ans + char1;
            }

            if (count1 > 0) {
                maxHeap.push({count1, char1});
            }
        }
        
        return ans;
    }
};
