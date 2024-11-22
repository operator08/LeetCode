class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int maxIdenticalRowCount = 0;
        for (int currentRow = 0; currentRow < row; currentRow++) {
            int identicalRowCount = 0;
            vector<int> flippedRow(col);
            for (int currentCol = 0; currentCol < col; currentCol++) {
                flippedRow[currentCol] =  1 - matrix[currentRow][currentCol];
            } 
            for (auto& compareRow : matrix) {
                if (compareRow == matrix[currentRow] || compareRow == flippedRow) {
                    identicalRowCount++;
                }
            }
            maxIdenticalRowCount = max(maxIdenticalRowCount, identicalRowCount);
        }   
        return maxIdenticalRowCount;
    }
};