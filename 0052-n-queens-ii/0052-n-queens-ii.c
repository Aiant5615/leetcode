static int count(int full, int cols, int d1, int d2) {
    if (cols == full) return 1;
    int total = 0, free = full & ~(cols | d1 | d2);
    while (free) {
        int bit = free & -free;
        free -= bit;
        total += count(full, cols | bit, ((d1 | bit) << 1) & full, (d2 | bit) >> 1);
    }
    return total;
}

int totalNQueens(int n) {
    return count((1 << n) - 1, 0, 0, 0);
}
