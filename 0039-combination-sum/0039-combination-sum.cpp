class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        function<void(int, int)> backtrack = [&](int start, int remaining) {
            if (remaining == 0) { result.push_back(path); return; }
            for (int i = start; i < (int)candidates.size() && candidates[i] <= remaining; i++) {
                path.push_back(candidates[i]);
                backtrack(i, remaining - candidates[i]);
                path.pop_back();
            }
        };
        backtrack(0, target);
        return result;
    }
};
