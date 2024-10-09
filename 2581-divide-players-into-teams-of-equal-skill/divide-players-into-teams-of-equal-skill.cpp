class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long size = skill.size();
        long long sum = 0;
        for (long long i = 0; i < size; i++) {
            sum += skill[i];
        }

        long long perTeamSum = 2 * sum / size;
        // Team count =  size / 2 of size 2

        long long output = 0;

        sort(skill.begin(), skill.end());

        
        for (long long i = 0; i < size / 2; i++) {
            if (skill[i] + skill[size - 1 - i] == perTeamSum) {
                output += skill[i] * skill[size - 1 - i];
            }
            else
                return -1;
        }
        return output;
    }
};