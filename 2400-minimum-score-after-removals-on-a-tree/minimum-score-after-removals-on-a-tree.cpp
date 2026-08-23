class Solution {
public:
    vector<vector<int>> g;
    vector<int> sub, tin, tout;
    int tim = 0;

    void dfs(int u, int p, vector<int>& nums) {
        tin[u] = tim++;
        sub[u] = nums[u];

        for (int v : g[u]) {
            if (v == p)
                continue;

            dfs(v, u, nums);
            sub[u] ^= sub[v];
        }

        tout[u] = tim;
    }

    bool inside(int a, int b) {
        return tin[b] <= tin[a] && tin[a] < tout[b];
    }

    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();

        g.resize(n);
        sub.resize(n);
        tin.resize(n);
        tout.resize(n);

        for (auto& e : edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }

        dfs(0, -1, nums);

        int total = sub[0];
        int ans = INT_MAX;

      
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int x, y, z;

                if (inside(i, j)) {
                    x = sub[i];
                    y = sub[j] ^ sub[i];
                    z = total ^ sub[j];
                }
                else if (inside(j, i)) {
                    x = sub[j];
                    y = sub[i] ^ sub[j];
                    z = total ^ sub[i];
                }
                else {
                    x = sub[i];
                    y = sub[j];
                    z = total ^ sub[i] ^ sub[j];
                }

                int mx = max({x, y, z});
                int mn = min({x, y, z});

                ans = min(ans, mx - mn);
            }
        }

        return ans;
    }
};