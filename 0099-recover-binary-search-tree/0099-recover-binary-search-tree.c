void recoverTree(struct TreeNode* root) {
    struct TreeNode *first = NULL, *second = NULL, *prev = NULL, *node = root;
    struct TreeNode* stack[1000];
    int top = 0;
    while (node || top > 0) {
        while (node) { stack[top++] = node; node = node->left; }
        node = stack[--top];
        if (prev && prev->val > node->val) {
            if (!first) first = prev;
            second = node;
        }
        prev = node;
        node = node->right;
    }
    int t = first->val;
    first->val = second->val;
    second->val = t;
}
