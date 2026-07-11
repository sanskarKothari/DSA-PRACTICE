class Solution {
    void bfs(vector<int>& vis, vector<vector<int>>& adj, int src) {

        queue<int> q;
        q.push(src);
        vis[src] = 1;

        while(!q.empty()) {
            int f = q.front();
            q.pop();

            for(auto it : adj[f]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<vector<int>> adj(n);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(isConnected[i][j] == 1 && i!=j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> vis(n, 0);
        int c = 0;

        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                bfs(vis, adj, i);
                c++;
            }
        }

        return c;
    }
};