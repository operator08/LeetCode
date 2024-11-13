class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> paren;
        if (n % 2 == 1) return false;
        for (int i = 0; i < n; i++) {
            char curChar = s[i];
            if (curChar == '(' || curChar == '[' || curChar == '{') {
                paren.push(curChar);
            } else if (!paren.empty()){
                if (paren.top() == '(' && curChar == ')')
                    paren.pop();
                else if (paren.top() == '[' && curChar == ']')
                    paren.pop();
                else if (paren.top() == '{' && curChar == '}')
                    paren.pop();
                else return false;
            } else {
                return false;
            }
        }
        if (paren.empty()) return true;
        return false;
    }
};