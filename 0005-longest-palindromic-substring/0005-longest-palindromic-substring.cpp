class Solution {
public:
    string longestPalindrome(string s) {
        int bestStart = 0, bestLen = 0;
        for (int center = 0; center < (int)s.size(); center++) {
            for (int odd = 0; odd < 2; odd++) {
                int left = center, right = center + odd;
                while (left >= 0 && right < (int)s.size() && s[left] == s[right]) { left--; right++; }
                if (right - left - 1 > bestLen) { bestStart = left + 1; bestLen = right - left - 1; }
            }
        }
        return s.substr(bestStart, bestLen);
    }
};
