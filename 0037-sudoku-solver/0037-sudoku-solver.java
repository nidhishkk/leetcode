
class Solution {
    public void solveSudoku(char[][] board) {
        solve(board);
    }

    boolean solve(char[][] board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, row, col, num)) {
                            board[row][col] = num;

                            if (solve(board)) {
                                return true;
                            }

                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    boolean isValid(char[][] board,int row,int col,char num){
        for (int i=0;i<9;i++){
            if (board[row][i]==num||board[i][col]==num||board[3*(row/3)+i/3][3*(col/3)+i%3]==num){
                return false;
            }
        }
        return true;
    }
}
