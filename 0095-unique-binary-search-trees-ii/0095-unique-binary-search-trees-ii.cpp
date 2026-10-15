class Solution {
    vector<TreeNode*> build(int lo, int hi) {
        if (lo > hi) return {nullptr};
        vector<TreeNode*> trees;
        for (int root = lo; root <= hi; root++)
            for (TreeNode* left : build(lo, root - 1))
                for (TreeNode* right : build(root + 1, hi))
                    trees.push_back(new TreeNode(root, left, right));
        return trees;
    }

public:
    vector<TreeNode*> generateTrees(int n) {
        return build(1, n);
    }
};
