class Solution {
    int f(vector<int>& ans, int x, int n, vector<vector<int>>& dp) {
        if (x == 0)
            return 0;

        if (x < 0 || n < 0)
            return 1e9;

        if (dp[x][n] != -1)
            return dp[x][n];

        int take = 1e9;

        if (ans[n] <= x)
            take = 1 + f(ans, x - ans[n], n, dp);

        int notTake = f(ans, x, n - 1, dp);

        return dp[x][n] = min(take, notTake);
    }

public:
    int minimumNumbers(int num, int k) {
        if (num == 0)
            return 0;

        vector<int> ans;

        int s = k;
        if (s == 0)
            s = 10;

        while (s <= num) {
            ans.push_back(s);
            s += 10;
        }

        vector<vector<int>> dp(num + 1,
                               vector<int>(ans.size(), -1));

        int res = f(ans, num, ans.size() - 1, dp);

        return res >= 1e9 ? -1 : res;
    }
};