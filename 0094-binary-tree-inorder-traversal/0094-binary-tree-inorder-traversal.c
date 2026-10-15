int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* out = malloc(sizeof(int) * 100);
    struct TreeNode* stack[100];
    int top = 0;
    struct TreeNode* node = root;
    *returnSize = 0;
    while (node || top > 0) {
        while (node) { stack[top++] = node; node = node->left; }
        node = stack[--top];
        out[(*returnSize)++] = node->val;
        node = node->right;
    }
    return out;
}
