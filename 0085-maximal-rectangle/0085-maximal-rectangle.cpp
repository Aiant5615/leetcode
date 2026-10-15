class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix[0].size(), best = 0;
        vector<int> heights(n + 1, 0);
        for (auto& row : matrix) {
            for (int c = 0; c < n; c++) heights[c] = row[c] == '1' ? heights[c] + 1 : 0;
            vector<int> stack;
            for (int i = 0; i <= n; i++) {
                while (!stack.empty() && heights[stack.back()] >= heights[i]) {
                    int height = heights[stack.back()];
                    stack.pop_back();
                    int left = stack.empty() ? 0 : stack.back() + 1;
                    best = max(best, height * (i - left));
                }
                stack.push_back(i);
            }
        }
        return best;
    }
};
