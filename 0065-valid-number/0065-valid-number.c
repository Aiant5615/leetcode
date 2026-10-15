bool isNumber(char* s) {
    bool digit = false, dot = false, exp = false;
    for (int i = 0; s[i]; i++) {
        char ch = s[i];
        if (ch >= '0' && ch <= '9') digit = true;
        else if (ch == '+' || ch == '-') { if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') return false; }
        else if (ch == 'e' || ch == 'E') { if (exp || !digit) return false; exp = true; digit = false; }
        else if (ch == '.') { if (dot || exp) return false; dot = true; }
        else return false;
    }
    return digit;
}
