class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> stack;
        int best = 0, n = heights.size();
        for (int i = 0; i <= n; i++) {
            int h = i == n ? 0 : heights[i];
            while (!stack.empty() && heights[stack.back()] >= h) {
                int height = heights[stack.back()];
                stack.pop_back();
                int left = stack.empty() ? 0 : stack.back() + 1;
                best = max(best, height * (i - left));
            }
            stack.push_back(i);
        }
        return best;
    }
};
