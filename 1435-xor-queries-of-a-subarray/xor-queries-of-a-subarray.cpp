class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> bs(n + 1);
        bs[0] = 0;
        for (int i = 0; i < n; i++) {
            bs[i + 1] = bs[i] ^ arr[i];
        }
        n = queries.size();
        vector<int> output(n);
        for (int i = 0; i < n; i++) {
            output[i] = bs[queries[i][1] + 1] ^ bs[queries[i][0]];
        }
        return output;
    }
};