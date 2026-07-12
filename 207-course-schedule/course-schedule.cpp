class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> v(n);
        
        vector<int> ind(n,0);
        for(auto it:prerequisites){
            int u = it[0];
            int k = it[1];
            v[k].push_back(u);
            ind[u]++;
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(ind[i]==0){
                q.push(i);
            }
        }

        vector<int> ans;
        while(!q.empty()){
            int fr = q.front();
            ans.push_back(fr);
            q.pop();

            for(auto it:v[fr]){
                ind[it]--;
                if(ind[it]==0){
                    q.push(it);
                }
            }
        }

        if(n==ans.size()) return 1;
        return 0;
    }
};