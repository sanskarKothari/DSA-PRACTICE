class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        vector<int>vis(adj.size(),0);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int fr=q.front();
            ans.push_back(fr);
            vis[fr]=1;
            q.pop();
            for(auto i:adj[fr]){
                if(vis[i]==0){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};