class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode *first = nullptr, *second = nullptr, *prev = nullptr, *node = root;
        stack<TreeNode*> st;
        while (node || !st.empty()) {
            while (node) { st.push(node); node = node->left; }
            node = st.top();
            st.pop();
            if (prev && prev->val > node->val) {
                if (!first) first = prev;
                second = node;
            }
            prev = node;
            node = node->right;
        }
        swap(first->val, second->val);
    }
};
