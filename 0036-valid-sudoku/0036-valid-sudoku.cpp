class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char x = board[i][j];

                if (x == '.')
                    continue;

                int box = (i / 3) * 3 + (j / 3);

                if (rows[i].count(x) || cols[j].count(x) ||
                    boxes[box].count(x)) {
                    return false;
                }

                rows[i].insert(x);
                cols[j].insert(x);
                boxes[box].insert(x);
            }
        }
        return true;
    }
};