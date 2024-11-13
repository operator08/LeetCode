class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> output;
        for (int i = 0; i < arr1.size(); i++) {
            int curNum = arr1[i];
            if (find(arr2.begin(), arr2.end(), curNum) != arr2.end() && find(arr3.begin(), arr3.end(), 
                curNum) != arr3.end()) {
                    output.push_back(curNum);
            }
        }
        return output;
    }
};