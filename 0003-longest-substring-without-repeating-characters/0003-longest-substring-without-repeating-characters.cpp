class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);
        int best = 0, start = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            unsigned char ch = s[i];
            if (lastSeen[ch] >= start) start = lastSeen[ch] + 1;
            lastSeen[ch] = i;
            best = max(best, i - start + 1);
        }
        return best;
    }
};
