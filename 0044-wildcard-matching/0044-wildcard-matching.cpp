class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0, star = -1, match = 0;
        while (i < (int)s.size()) {
            if (j < (int)p.size() && (p[j] == '?' || p[j] == s[i])) { i++; j++; }
            else if (j < (int)p.size() && p[j] == '*') { star = j++; match = i; }
            else if (star != -1) { j = star + 1; i = ++match; }
            else return false;
        }
        while (j < (int)p.size() && p[j] == '*') j++;
        return j == (int)p.size();
    }
};
