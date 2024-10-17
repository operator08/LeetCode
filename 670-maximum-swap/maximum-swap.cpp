#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maximumSwap(int num) {
        string numString = to_string(num);
        int n = numString.size();
        int maxNum = num;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(numString[i], numString[j]);

                maxNum = max(maxNum, stoi(numString));

                swap(numString[i], numString[j]);
            }
        }

        return maxNum;
    }
};