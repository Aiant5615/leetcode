bool isMatch(char* s, char* p) {
    int i = 0, j = 0, star = -1, match = 0;
    int n = strlen(s), m = strlen(p);
    while (i < n) {
        if (j < m && (p[j] == '?' || p[j] == s[i])) { i++; j++; }
        else if (j < m && p[j] == '*') { star = j++; match = i; }
        else if (star != -1) { j = star + 1; i = ++match; }
        else return false;
    }
    while (j < m && p[j] == '*') j++;
    return j == m;
}
