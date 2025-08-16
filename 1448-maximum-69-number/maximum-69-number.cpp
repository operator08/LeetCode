class Solution {
public:
    int maximum69Number (int num) {
      std::string number = std::to_string(num);
      int n = number.size();
      for (int i = 0; i < n; i++) {
        if (number[i] == '6') {
          number[i] = '9';
          break;
        }
      }
      return std::stoi(number);
    }
};