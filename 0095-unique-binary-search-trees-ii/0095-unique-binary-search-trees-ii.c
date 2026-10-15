static struct TreeNode** build(int lo, int hi, int* size) {
    if (lo > hi) {
        struct TreeNode** only = malloc(sizeof(struct TreeNode*));
        only[0] = NULL;
        *size = 1;
        return only;
    }
    struct TreeNode** trees = malloc(sizeof(struct TreeNode*) * 1430);   /* Catalan(8) */
    *size = 0;
    for (int root = lo; root <= hi; root++) {
        int nl, nr;
        struct TreeNode** lefts = build(lo, root - 1, &nl);
        struct TreeNode** rights = build(root + 1, hi, &nr);
        for (int i = 0; i < nl; i++) {
            for (int j = 0; j < nr; j++) {
                struct TreeNode* t = malloc(sizeof(struct TreeNode));
                t->val = root;
                t->left = lefts[i];
                t->right = rights[j];
                trees[(*size)++] = t;
            }
        }
        free(lefts);
        free(rights);
    }
    return trees;
}

struct TreeNode** generateTrees(int n, int* returnSize) {
    return build(1, n, returnSize);
}
