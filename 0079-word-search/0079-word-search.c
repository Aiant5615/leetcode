static bool dfs(char** board, int m, int n, char* word, int r, int c) {
    if (!*word) return true;
    if (r < 0 || c < 0 || r >= m || c >= n || board[r][c] != *word) return false;
    board[r][c] = '#';
    bool found = dfs(board, m, n, word + 1, r + 1, c) || dfs(board, m, n, word + 1, r - 1, c) ||
                 dfs(board, m, n, word + 1, r, c + 1) || dfs(board, m, n, word + 1, r, c - 1);
    board[r][c] = *word;
    return found;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    for (int r = 0; r < boardSize; r++)
        for (int c = 0; c < boardColSize[0]; c++)
            if (dfs(board, boardSize, boardColSize[0], word, r, c)) return true;
    return false;
}
