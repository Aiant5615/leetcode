bool isValid(char* s) {
    int n = strlen(s), top = 0;
    char* stack = malloc(n + 1);
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') { stack[top++] = ch; continue; }
        if (top == 0) { free(stack); return false; }
        char open = stack[--top];
        if ((ch == ')' && open != '(') || (ch == ']' && open != '[') || (ch == '}' && open != '{')) { free(stack); return false; }
    }
    free(stack);
    return top == 0;
}
