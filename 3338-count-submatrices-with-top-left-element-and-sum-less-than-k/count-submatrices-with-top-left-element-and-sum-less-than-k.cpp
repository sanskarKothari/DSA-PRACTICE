class Solution {
public:
    int countSubmatrices(vector<vector<int>>& g, int k) {
        int n = g.size(), m = g[0].size();
        int ans = 0;

        vector<vector<long long>> pre(n, vector<long long>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pre[i][j] = g[i][j];

                if (i) pre[i][j] += pre[i - 1][j];
                if (j) pre[i][j] += pre[i][j - 1];
                if (i && j) pre[i][j] -= pre[i - 1][j - 1];

                if (pre[i][j] <= k)
                    ans++;
            }
        }

        return ans;
    }
};