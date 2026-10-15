static bool rowUsed[9][10], colUsed[9][10], boxUsed[9][10];

static bool backtrack(char** board, int cell) {
    while (cell < 81 && board[cell / 9][cell % 9] != '.') cell++;
    if (cell == 81) return true;
    int r = cell / 9, c = cell % 9, b = r / 3 * 3 + c / 3;
    for (int d = 1; d <= 9; d++) {
        if (rowUsed[r][d] || colUsed[c][d] || boxUsed[b][d]) continue;
        board[r][c] = '0' + d;
        rowUsed[r][d] = colUsed[c][d] = boxUsed[b][d] = true;
        if (backtrack(board, cell + 1)) return true;
        rowUsed[r][d] = colUsed[c][d] = boxUsed[b][d] = false;
    }
    board[r][c] = '.';
    return false;
}

void solveSudoku(char** board, int boardSize, int* boardColSize) {
    memset(rowUsed, 0, sizeof(rowUsed));
    memset(colUsed, 0, sizeof(colUsed));
    memset(boxUsed, 0, sizeof(boxUsed));
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (board[r][c] == '.') continue;
            int d = board[r][c] - '0';
            rowUsed[r][d] = colUsed[c][d] = boxUsed[r / 3 * 3 + c / 3][d] = true;
        }
    }
    backtrack(board, 0);
}
