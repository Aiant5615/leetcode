int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* out = malloc(sizeof(int) * (digitsSize + 1));
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int total = digits[i] + carry;
        out[i + 1] = total % 10;
        carry = total / 10;
    }
    if (carry) { out[0] = 1; *returnSize = digitsSize + 1; return out; }
    memmove(out, out + 1, sizeof(int) * digitsSize);
    *returnSize = digitsSize;
    return out;
}
