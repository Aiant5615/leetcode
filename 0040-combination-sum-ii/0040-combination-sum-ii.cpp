class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        function<void(int, int)> backtrack = [&](int start, int remaining) {
            if (remaining == 0) { result.push_back(path); return; }
            for (int i = start; i < (int)candidates.size() && candidates[i] <= remaining; i++) {
                if (i > start && candidates[i] == candidates[i - 1]) continue;
                path.push_back(candidates[i]);
                backtrack(i + 1, remaining - candidates[i]);
                path.pop_back();
            }
        };
        backtrack(0, target);
        return result;
    }
};
