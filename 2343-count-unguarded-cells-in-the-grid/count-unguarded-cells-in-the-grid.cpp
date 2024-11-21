class Solution {
public:
    const int UNGUARDED = 0;
    const int GUARDED = 1;
    const int GUARD = 2;
    const int WALL = 3;
    
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        for (auto pos : guards) {
            grid[pos[0]][pos[1]] = GUARD;
        }
        for (auto pos : walls) {
            grid[pos[0]][pos[1]] = WALL;
        }
        for (int l = 0; l < guards.size(); l++) {
            int i = guards[l][0];
            int j = guards[l][1];
            // Up
            for (int k = i - 1; k >= 0; k--) {
                int currentBlock = grid[k][j];
                if (currentBlock == GUARD || currentBlock == WALL) break;
                grid[k][j] = 1;
            }
            // Down
            for (int k = i + 1; k < m; k++) {
                int currentBlock = grid[k][j];
                if (currentBlock == GUARD || currentBlock == WALL) break;
                grid[k][j] = 1;
            }
            // Left
            for (int k = j - 1; k >= 0; k--) {
                int currentBlock = grid[i][k];
                if (currentBlock == GUARD || currentBlock == WALL) break;
                grid[i][k] = 1;
            }
            // Right
            for (int k = j + 1; k < n; k++) {
                int currentBlock = grid[i][k];
                if (currentBlock == GUARD || currentBlock == WALL) break;
                grid[i][k] = 1;
            }
        }
        int unguardedCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == UNGUARDED) unguardedCount++;
            }
        }
        return unguardedCount;
    }
};