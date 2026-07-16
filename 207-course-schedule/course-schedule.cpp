class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& edges) {
           vector<vector<int>>a(V);
        vector<int>in(V,0);
        vector<int>ad;
        for(auto i:edges){
            int j=i[0];
            int k=i[1];
            a[k].push_back(j);
            in[j]++;
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(in[i]==0)q.push(i);
        }
        while(!q.empty()){
            int fr=q.front();
            ad.push_back(fr);
            q.pop();
            for(auto n:a[fr]){
                in[n]--;
                if(in[n]==0)q.push(n);
            }
        }
        if(ad.size()==V)return 1;
        return 0;
    }
};