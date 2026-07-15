class Solution {
    map<int,pair<int,int>> mp;

    void f(Node *root,int x,int y){
        if(!root) return;

        if(!mp.count(x) || y >= mp[x].first)
            mp[x] = {y, root->data};

        f(root->left, x-1, y+1);
        f(root->right, x+1, y+1);
    }

public:
    vector<int> bottomView(Node *root) {

        vector<int> ans;

        f(root,0,0);

        for(auto &p : mp)
            ans.push_back(p.second.second);

        return ans;
    }
};