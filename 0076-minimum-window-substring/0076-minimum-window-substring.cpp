class Solution {
public:
    string minWindow(string s, string t) {
        int need[128] = {0};
        for (char ch : t) need[(unsigned char)ch]++;
        int missing = t.size(), start = 0, bestStart = 0, bestLen = INT_MAX;
        for (int end = 0; end < (int)s.size(); end++) {
            if (need[(unsigned char)s[end]]-- > 0) missing--;
            while (missing == 0) {
                if (end - start + 1 < bestLen) { bestStart = start; bestLen = end - start + 1; }
                if (++need[(unsigned char)s[start++]] > 0) missing++;
            }
        }
        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};
