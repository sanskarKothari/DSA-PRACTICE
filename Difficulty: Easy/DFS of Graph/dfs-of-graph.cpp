class Solution {
public:
    vector<int> ans;
    vector<int> vis;

    void dfsHelper(int node, vector<vector<int>>& adj) {
        vis[node] = 1;
        ans.push_back(node);

        for (auto nbr : adj[node]) {
            if (!vis[nbr]) {
                dfsHelper(nbr, adj);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();

        vis.assign(V, 0);

        dfsHelper(0, adj);

        return ans;
    }
};