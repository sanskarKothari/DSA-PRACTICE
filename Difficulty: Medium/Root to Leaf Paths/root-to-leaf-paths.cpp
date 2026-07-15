class Solution {
public:
    bool iL(Node* root){
        return root && !root->left && !root->right;
    }

    void f(Node* root, vector<int>& path, vector<vector<int>>& ans){
        if(!root) return;

        path.push_back(root->data);

        if(iL(root)){
            ans.push_back(path);
        }
        else{
            f(root->left, path, ans);
            f(root->right, path, ans);
        }

        path.pop_back();
    }

    vector<vector<int>> paths(Node* root) {

        vector<vector<int>> ans;
        vector<int> path;

        if(!root) return ans;

        f(root, path, ans);

        return ans;
    }
};