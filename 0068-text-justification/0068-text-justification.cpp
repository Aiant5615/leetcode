class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> lines;
        int i = 0, n = words.size();
        while (i < n) {
            int j = i, width = 0;
            while (j < n && width + (int)words[j].size() + (j - i) <= maxWidth) width += words[j++].size();
            int gaps = j - i - 1;
            string line;
            if (j == n || gaps == 0) {
                for (int k = i; k < j; k++) line += (k > i ? " " : "") + words[k];
                line += string(maxWidth - line.size(), ' ');
            } else {
                int spaces = (maxWidth - width) / gaps, extra = (maxWidth - width) % gaps;
                for (int k = i; k < j - 1; k++) line += words[k] + string(spaces + (k - i < extra ? 1 : 0), ' ');
                line += words[j - 1];
            }
            lines.push_back(line);
            i = j;
        }
        return lines;
    }
};
