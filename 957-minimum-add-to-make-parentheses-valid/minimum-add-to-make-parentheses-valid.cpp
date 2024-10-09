class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = s.size();
        int balance = 0;
        int moves = 0;

        for (int i = 0; i < size; i++) {
            if (s[i] == '(')      balance++;
            else if (balance > 0) balance--;
            else 			      moves++;
        }
        return moves + balance;
    }
};