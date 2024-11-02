class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int i = 0;
        vector<int> output(n, 0);

        while (i < n) {
            if (k > 0) {
                int j = i + 1; 
                int K = k;

                while (K--) {
                    if (j < n) {
                        output[i] += code[j];
                        j++;
                    } else {
                        j = 0;
                        output[i] += code[j];
                        j++;
                    }
                }
            } else if (k < 0) {
                int j = i - 1;
                int K = -1 * k;

                while (K--) {
                    if (j >= 0) {
                        output[i] += code[j];
                        j--;
                    } else {
                        j = n - 1;
                        output[i] += code[j];
                        j--;
                    }
                }
            } else {
                output[i] = 0;
            }

            i++;
        }

        return output;
    }
};