class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int, int> freq;
        int n = tops.size();
        for (int i = 0; i < n; i++) {
            freq[tops[i]]++;
            freq[bottoms[i]]++;
        }
        int minRotationCount = INT_MAX;
        bool valid = false;
        for (auto& [k, v] : freq) {
            if (v >= n) {
                int rotationCount = 0, rotationCount2 = 0;
                bool canItBeDone = true, canItBeDone2 = true;
                // tops case
                for (int i = 0; i < n; i++) {
                    if (tops[i] != k && bottoms[i] == k) {
                        rotationCount++;
                    } else if (tops[i] == k) {
                        continue; 
                    } else {
                        canItBeDone = false;
                        break;
                    }
                }
                if (canItBeDone) {
                    minRotationCount = min(minRotationCount, rotationCount);
                }
                for (int i = 0; i < n; i++) {
                    if (bottoms[i] != k && tops[i] == k) {
                        rotationCount2++;
                    } else if (bottoms[i] == k) {
                        continue; 
                    } else {
                        canItBeDone2 = false;
                        break;
                    }
                }
                if (canItBeDone2) {
                    minRotationCount = min(minRotationCount, rotationCount2);
                } else if (!canItBeDone && !canItBeDone2) {
                    return -1;
                }
                valid = true;
            }
        }
        return (valid ? minRotationCount : - 1);
    }
};