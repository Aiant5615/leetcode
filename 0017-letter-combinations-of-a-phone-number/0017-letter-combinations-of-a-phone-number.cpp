class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        const vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        string path;
        function<void(int)> backtrack = [&](int i) {
            if (i == (int)digits.size()) { result.push_back(path); return; }
            for (char letter : keypad[digits[i] - '0']) {
                path.push_back(letter);
                backtrack(i + 1);
                path.pop_back();
            }
        };
        backtrack(0);
        return result;
    }
};
