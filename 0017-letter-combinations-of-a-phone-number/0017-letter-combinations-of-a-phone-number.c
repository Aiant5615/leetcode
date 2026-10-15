static const char* KEYPAD[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

static void backtrack(const char* digits, int i, char* path, char** result, int* count) {
    if (!digits[i]) {
        result[*count] = malloc(i + 1);
        memcpy(result[*count], path, i);
        result[*count][i] = '\0';
        (*count)++;
        return;
    }
    for (const char* p = KEYPAD[digits[i] - '0']; *p; p++) {
        path[i] = *p;
        backtrack(digits, i + 1, path, result, count);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    if (!digits[0]) return malloc(sizeof(char*));
    char** result = malloc(sizeof(char*) * 256);
    char path[5];
    backtrack(digits, 0, path, result, returnSize);
    return result;
}
