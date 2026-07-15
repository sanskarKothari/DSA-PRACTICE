class Solution {
    void f(TreeNode* root,vector<int>&a){
        if(!root)return ;
        
        f(root->left,a);
        a.push_back(root->val);
        f(root->right,a);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>a;
        f(root,a);
        return a;



    }
};