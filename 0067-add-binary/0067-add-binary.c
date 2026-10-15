char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0;
    int size = (i > j ? i : j) + 3, k = size - 1;
    char* out = malloc(size);
    out[k] = '\0';
    while (i >= 0 || j >= 0 || carry) {
        int total = carry;
        if (i >= 0) total += a[i--] - '0';
        if (j >= 0) total += b[j--] - '0';
        out[--k] = '0' + total % 2;
        carry = total / 2;
    }
    memmove(out, out + k, size - k);
    return out;
}
