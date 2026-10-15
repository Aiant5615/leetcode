char* multiply(char* num1, char* num2) {
    int m = strlen(num1), n = strlen(num2);
    int* digits = calloc(m + n, sizeof(int));
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int total = (num1[i] - '0') * (num2[j] - '0') + digits[i + j + 1];
            digits[i + j + 1] = total % 10;
            digits[i + j] += total / 10;
        }
    }
    char* result = malloc(m + n + 1);
    int pos = 0;
    for (int k = 0; k < m + n; k++)
        if (pos > 0 || digits[k] != 0) result[pos++] = '0' + digits[k];
    if (pos == 0) result[pos++] = '0';
    result[pos] = '\0';
    free(digits);
    return result;
}
