class Solution {
public:
    #define pb push_back
    string reverseWords(string s) {
        int n = s.size();
        vector<string> arr;
        int w = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                if (arr.size() <= w) arr.pb("");
                arr[w] += s[i];
            } else if (i >= 1 && s[i - 1] != ' ' && s[i] == ' ')  {
                while (s[i] == ' ') i++;
                i--;
                w++;
            }
        }
        string res = "";
        n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            res += arr[i];
            if (i != 0) res += ' ';
        }
        return res;
    }
};