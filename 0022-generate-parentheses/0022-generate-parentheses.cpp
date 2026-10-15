class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string path;
        function<void(int, int)> backtrack = [&](int opened, int closed) {
            if ((int)path.size() == 2 * n) { result.push_back(path); return; }
            if (opened < n) { path.push_back('('); backtrack(opened + 1, closed); path.pop_back(); }
            if (closed < opened) { path.push_back(')'); backtrack(opened, closed + 1); path.pop_back(); }
        };
        backtrack(0, 0);
        return result;
    }
};
