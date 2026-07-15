class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        map<TreeNode*, TreeNode*> p;

        queue<TreeNode*> q;
        q.push(root);

        // Parent mapping
        while(!q.empty()) {

            int sz = q.size();

            for(int i = 0; i < sz; i++) {

                TreeNode* w = q.front();
                q.pop();

                if(w->left) {
                    q.push(w->left);
                    p[w->left] = w;
                }

                if(w->right) {
                    q.push(w->right);
                    p[w->right] = w;
                }
            }
        }

        queue<TreeNode*> q1;
        q1.push(target);

        map<TreeNode*, bool> vis;
        vis[target] = true;

        int lvl = 0;

        while(!q1.empty()) {

            if(lvl == k) break;

            lvl++;

            int sz = q1.size();

            for(int i = 0; i < sz; i++) {

                TreeNode* w = q1.front();
                q1.pop();

                if(w->left && !vis[w->left]) {
                    vis[w->left] = true;
                    q1.push(w->left);
                }

                if(w->right && !vis[w->right]) {
                    vis[w->right] = true;
                    q1.push(w->right);
                }

                if(p.count(w) && !vis[p[w]]) {
                    vis[p[w]] = true;
                    q1.push(p[w]);
                }
            }
        }

        vector<int> ans;

        while(!q1.empty()) {
            ans.push_back(q1.front()->val);
            q1.pop();
        }

        return ans;
    }
};