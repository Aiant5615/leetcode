class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> path;
        function<void(int)> backtrack = [&](int start) {
            if ((int)path.size() == k) { result.push_back(path); return; }
            for (int x = start; x <= n - (k - (int)path.size()) + 1; x++) {
                path.push_back(x);
                backtrack(x + 1);
                path.pop_back();
            }
        };
        backtrack(1);
        return result;
    }
};
