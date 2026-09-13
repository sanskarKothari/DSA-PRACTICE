class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size(), ans = 0;

        for (int dx = -n + 1; dx < n; dx++) {
            for (int dy = -n + 1; dy < n; dy++) {
                int cnt = 0;

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        int x = i + dx, y = j + dy;

                        if (x >= 0 && x < n && y >= 0 && y < n &&
                            A[i][j] && B[x][y])
                            cnt++;
                    }
                }

                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};