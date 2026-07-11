class Solution {
public:

    bool bfs(int src, vector<vector<int>>& adj,
             vector<int>& vis) {

        queue<pair<int,int>> q;
        q.push({src, -1});

        vis[src] = 1;

        while(!q.empty()) {

            auto f = q.front();
            q.pop();

            int node = f.first;
            int parent = f.second;

            for(auto nbr : adj[node]) {

                if(!vis[nbr]) {

                    vis[nbr] = 1;
                    q.push({nbr, node});
                }
                else if(nbr != parent) {
                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {

                if(bfs(i, adj, vis))
                    return true;
            }
        }

        return false;
    }
};