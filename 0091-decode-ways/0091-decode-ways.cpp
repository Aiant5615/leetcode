class Solution {
public:
    int numDecodings(string s) {
        int prev = 1, cur = s[0] != '0' ? 1 : 0;   // ways for s[0..i-2] and s[0..i-1]
        for (int i = 1; i < (int)s.size(); i++) {
            int ways = s[i] != '0' ? cur : 0;
            int two = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (two >= 10 && two <= 26) ways += prev;
            prev = cur;
            cur = ways;
        }
        return cur;
    }
};
