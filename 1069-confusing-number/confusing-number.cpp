class Solution {
public:
    bool confusingNumber(int n) {
        string numberStr = to_string(n);

        int size = numberStr.size();

        if (size != 1) {
            for (int i = 0; i < size / 2; i++) {
                swap(numberStr[i], numberStr[size - 1]);
            }
        }


        for (int j = 0; j < size; j++) {
            switch(numberStr[j]) {
                case '0':
                    break;	
                case '1':
                    break;
                case '6':
                    numberStr[j] = '9';
                    break;
                case '8':
                    break;
                case '9':
                    numberStr[j] = '6';
                    break;
                default:
                    return false;
            }
        }

        if (stoi(numberStr) == n) {
            return false;
        }

        return true;
    }
};