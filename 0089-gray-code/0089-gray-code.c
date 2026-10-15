int* grayCode(int n, int* returnSize) {
    *returnSize = 1 << n;
    int* out = malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++) out[i] = i ^ (i >> 1);
    return out;
}
