char* getPermutation(int n, int k) {
    char digits[10];
    int factorial[10] = {1};
    for (int i = 0; i < n; i++) digits[i] = '1' + i;
    for (int i = 1; i < n; i++) factorial[i] = factorial[i - 1] * i;
    char* out = malloc(n + 1);
    int remaining = n;
    k--;
    for (int i = n - 1, pos = 0; i >= 0; i--, pos++) {
        int index = k / factorial[i];
        k %= factorial[i];
        out[pos] = digits[index];
        memmove(digits + index, digits + index + 1, remaining - index - 1);
        remaining--;
    }
    out[n] = '\0';
    return out;
}
