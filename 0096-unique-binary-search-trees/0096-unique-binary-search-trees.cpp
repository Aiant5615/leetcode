class Solution {
public:
    int numTrees(int n) {
        vector<long long> count(n + 1, 0);
        count[0] = 1;
        for (int nodes = 1; nodes <= n; nodes++)
            for (int root = 1; root <= nodes; root++) count[nodes] += count[root - 1] * count[nodes - root];
        return count[n];
    }
};
