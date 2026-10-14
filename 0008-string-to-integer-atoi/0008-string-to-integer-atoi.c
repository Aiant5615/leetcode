int myAtoi(char* s) {
    int i = 0;
    while (s[i] == ' ') i++;
    int sign = 1;
    if (s[i] == '+' || s[i] == '-') { sign = s[i] == '-' ? -1 : 1; i++; }
    long value = 0;
    while (s[i] >= '0' && s[i] <= '9') {
        value = value * 10 + (s[i] - '0');
        if (sign * value > INT_MAX) return INT_MAX;
        if (sign * value < INT_MIN) return INT_MIN;
        i++;
    }
    return (int)(sign * value);
}
