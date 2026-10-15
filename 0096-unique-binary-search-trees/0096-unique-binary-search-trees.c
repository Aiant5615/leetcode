int numTrees(int n) {
    long long count[20] = {1};
    for (int nodes = 1; nodes <= n; nodes++)
        for (int root = 1; root <= nodes; root++) count[nodes] += count[root - 1] * count[nodes - root];
    return count[n];
}
