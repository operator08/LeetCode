class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }        
        if (freq['a'] < k || freq['b'] < k || freq['c'] < k) return -1;
        int left = 0;
        vector<int> window(3, 0);
        int maxWindow = 0;
        for (int right = 0; right < n; right++) {
            window[s[right] - 'a']++;
            while (left <= right && (freq['a'] - window[0] < k || freq['b'] - window[1] < k
                || freq['c'] - window[2] < k)) {
                window[s[left] - 'a']--;
                left++;
            }
            maxWindow = max(maxWindow, right - left + 1);
        }
        return n - maxWindow;
    }
};