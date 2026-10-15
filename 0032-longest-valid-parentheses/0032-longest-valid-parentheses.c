int longestValidParentheses(char* s) {
    int n = strlen(s), top = 0, best = 0;
    int* stack = malloc(sizeof(int) * (n + 1));
    stack[top++] = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') stack[top++] = i;
        else {
            top--;
            if (top == 0) stack[top++] = i;
            else if (i - stack[top - 1] > best) best = i - stack[top - 1];
        }
    }
    free(stack);
    return best;
}
