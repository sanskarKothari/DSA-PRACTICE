class Solution {
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int r, int c){
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m || 
           grid[r][c] == '0' || vis[r][c] == 1) return;

        vis[r][c] = 1;

        dfs(grid, vis, r+1, c);
        dfs(grid, vis, r-1, c);
        dfs(grid, vis, r, c+1);
        dfs(grid, vis, r, c-1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int cnt = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    dfs(grid, vis, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};