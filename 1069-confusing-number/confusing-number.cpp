class Solution {
public:
    bool confusingNumber(int n) {
        string numberStr = to_string(n);

        int size = numberStr.size();

        unordered_map<int, int> invertMap = {{0, 0}, {1, 1}, {6, 9}, {8, 8}, {9, 6}};

        int rotatedNumber = 0, nCopy = n;

        while (nCopy > 0) {
            int latest = nCopy % 10;

            if (invertMap.find(latest) == invertMap.end()) {
                return false;
            }

            rotatedNumber = rotatedNumber * 10 + invertMap[latest];

            nCopy /= 10;	
        }

        return rotatedNumber != n;
    }
};