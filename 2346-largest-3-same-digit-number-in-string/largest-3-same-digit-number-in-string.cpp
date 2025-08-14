class Solution {
public:
    std::string largestGoodInteger(std::string num) {
        int n = num.size();
        int best = -1;
        for (int i = 0; i <= n - 3; i++) {
            std::string curSub = num.substr(i, 3);
            if (curSub[0] == curSub[1] && curSub[0] == curSub[2]) {
                if (std::stoi(curSub) > best) {
                    best = std::stoi(curSub);
                }
            }
        }    
        if (best == -1) return "";
        std::string maxGood = std::to_string(best);
        if (maxGood.size() == 1) {
            maxGood = "000";
        }
        return maxGood;
    }
};