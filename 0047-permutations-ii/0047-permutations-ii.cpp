class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> path;
        vector<bool> used(nums.size(), false);
        function<void()> backtrack = [&]() {
            if (path.size() == nums.size()) { result.push_back(path); return; }
            for (int i = 0; i < (int)nums.size(); i++) {
                if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) continue;
                used[i] = true;
                path.push_back(nums[i]);
                backtrack();
                path.pop_back();
                used[i] = false;
            }
        };
        backtrack();
        return result;
    }
};
