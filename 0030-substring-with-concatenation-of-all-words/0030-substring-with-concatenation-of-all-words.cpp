class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int width = words[0].size(), count = words.size(), n = s.size();
        unordered_map<string, int> need;
        for (const string& w : words) need[w]++;
        vector<int> result;
        for (int offset = 0; offset < width; offset++) {
            unordered_map<string, int> seen;
            int left = offset, used = 0;
            for (int right = offset; right + width <= n; right += width) {
                string word = s.substr(right, width);
                if (!need.count(word)) { seen.clear(); used = 0; left = right + width; continue; }
                seen[word]++;
                used++;
                while (seen[word] > need[word]) { seen[s.substr(left, width)]--; left += width; used--; }
                if (used == count) result.push_back(left);
            }
        }
        return result;
    }
};
