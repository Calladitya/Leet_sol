class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Row + Column check
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.')
                    continue;

                for(int k = 0; k < 9; k++) {

                    // Row
                    if(k != j && board[i][k] == board[i][j]) {
                        return false;
                    }

                    // Column
                    if(k != i && board[k][j] == board[i][j]) {
                        return false;
                    }
                }
            }
        }

        // 3 x 3 boxes
        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {

                for(int r = i; r < i + 3; r++) {
                    for(int l = j; l < j + 3; l++) {

                        if(board[r][l] == '.')
                            continue;

                        // Current 3x3 box ke andar search
                        for(int x = i; x < i + 3; x++) {
                            for(int y = j; y < j + 3; y++) {

                                if(x == r && y == l)
                                    continue;

                                if(board[x][y] == board[r][l]) {
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
