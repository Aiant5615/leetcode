class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (const string& word : strs) {
            int k = 0;
            while (k < (int)prefix.size() && k < (int)word.size() && prefix[k] == word[k]) k++;
            prefix = prefix.substr(0, k);
        }
        return prefix;
    }
};
