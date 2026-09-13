class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size();
        vector<pair<int,int>> a, b;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][j]) a.push_back({i, j});
                if (B[i][j]) b.push_back({i, j});
            }
        }

        unordered_map<int, int> mp;
        int ans = 0;

        for (auto x : a) {
            for (auto y : b) {
                int dx = y.first - x.first;
                int dy = y.second - x.second;

                int key = (dx + n) * (2 * n - 1) + (dy + n);
                ans = max(ans, ++mp[key]);
            }
        }

        return ans;
    }
};