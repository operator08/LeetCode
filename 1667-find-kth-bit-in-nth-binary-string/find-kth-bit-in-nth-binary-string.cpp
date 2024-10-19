class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string> s;
        s.push_back("0");

        for (int i = 1; i < n; i++) {
            string inverted = "";
            int size = s[i - 1].size();

            for (int j = 0; j < size; j++) {
                inverted.push_back(s[i - 1][j] == '1' ? '0' : '1');
            }
            
            reverse(inverted.begin(), inverted.end());
            s.push_back(s[i - 1] + '1' + inverted);     
        }                        

        return s[n - 1][k - 1];
    }
};